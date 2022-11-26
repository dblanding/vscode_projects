/*
This has been modified to create a "BinXCAF" document rather than "BinOcaf"
Save format is .xbf rather than .cbf
Also, removed classes IFeature and IMesh.

    entry       label <class 'OCC.Core.TDF.TDF_Label'>
    0:1         doc.Main()                          (Depth = 1)
    0:1:1       shape_tool is at this label entry   (Depth = 2)
    0:1:2       color_tool at this entry            (Depth = 2)
    0:1:1:1     root_label and all referred shapes  (Depth = 3)
    0:1:1:x:x   component labels (references)       (Depth = 4)

*/
#include <TDocStd_Application.hxx>
#include <TDataStd_Integer.hxx>
#include <BinDrivers.hxx>
#include <BinXCAFDrivers.hxx>
#include <Interface_Static.hxx>
#include <TDataStd_Name.hxx>
#include <TNaming_Builder.hxx>
#include <TNaming_NamedShape.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeCylinder.hxx>
#include <TDataStd_IntPackedMap.hxx>
#include <TDF_ChildIterator.hxx>
#include <TopExp_Explorer.hxx>
#include <TopoDS.hxx>
#include <TDataXtd_Triangulation.hxx>
#include <TDF_Reference.hxx>
#include <BRepMesh_IncrementalMesh.hxx>
#include <TDocStd_XLinkTool.hxx>
#include <XCAFDoc_ColorTool.hxx>
#include <XCAFDoc_DocumentTool.hxx>
#include <XCAFDoc_ShapeTool.hxx>
#include <STEPCAFControl_Reader.hxx>
#include <STEPCAFControl_Writer.hxx>

#include <vector>

const char* filename = "../models/as1-oc-214.stp";
const char* save_step_file_name = "/home/doug/Desktop/test.stp";
const char* save_doc_file_name = "/home/doug/Desktop/test.xbf";

struct t_DocAppStruct
{
  Handle(TDocStd_Document)    doc;
  Handle(TDocStd_Application) app;
};

struct t_prototype
{
  TopoDS_Shape shape;
  TDF_Label    label;
};


class IPart
// Interface object for Part
{
public:

	IPart(const TDF_Label& label) : m_root(label)
	{
		TDataStd_Name::Set(label, "Part");
    }

public:

	const TDF_Label& GetLabel() const
	{
		return m_root;
	}

	void SetShape(const TopoDS_Shape& shape)
	{
		TNaming_Builder builder(m_root);
		builder.Generated(shape);
	}

	TopoDS_Shape GetShape() const
	{
		Handle(TNaming_NamedShape) attr;
		if ( !m_root.FindAttribute(TNaming_NamedShape::GetID(), attr) )
			return TopoDS_Shape();
		
		return attr->Get();
	}


private:

	TDF_Label m_root; //root label

};


namespace
{
  t_DocAppStruct createDoc()
  {
    // Create XDE document
    Handle(TDocStd_Application) app = new TDocStd_Application;
    BinXCAFDrivers::DefineFormat(app);
    //
    Handle(TDocStd_Document) doc;
    app->NewDocument("BinXCAF", doc);
    //
    // Create a DocAppStruct
    t_DocAppStruct docApp;
    docApp.app = app;
    docApp.doc = doc;

    return docApp;
  }
}

int main()
{
	Handle(TDocStd_Application) app = new TDocStd_Application;
	//
	BinXCAFDrivers::DefineFormat(app);

	Handle(TDocStd_Document) doc;
	app->NewDocument("BinXCAF", doc);
	//
	if (doc.IsNull())
	{
		std::cout << "Error: connot create an OCAF document." << std::endl;
		return 1;
	}

    Handle(XCAFDoc_ShapeTool) ST = XCAFDoc_DocumentTool::ShapeTool( doc->Main() );
    Handle(XCAFDoc_ColorTool) CT = XCAFDoc_DocumentTool::ColorTool( doc->Main() );
	
    // Create Root assembly
    TopoDS_Compound rootCompound;
    BRep_Builder rbuilder;
    rbuilder.MakeCompound(rootCompound);

    // Create root prototype; Add assembly and label to doc; Set name
    t_prototype rootProto;
    rootProto.shape = rootCompound;
    rootProto.label = ST->AddShape(rootCompound, true);
    TDataStd_Name::Set( rootProto.label, TCollection_ExtendedString("Root") );

    // Create a compound shape which will be copy target
    TopoDS_Compound compound;
    BRep_Builder cbuilder;
    cbuilder.MakeCompound(compound);
 
	// Create some parts
	IPart part1( TDF_TagSource::NewChild(rootProto.label) );
/*     
	IPart part2( TDF_TagSource::NewChild(rootProto.label) );
	IPart part3( TDF_TagSource::NewChild(rootProto.label) );
    IPart part4( TDF_TagSource::NewChild(rootProto.label) );
 */
	//
    part1.SetShape( compound );
/*     
	part2.SetShape( BRepPrimAPI_MakeBox(10, 10, 10) );
    part3.SetShape( BRepPrimAPI_MakeCylinder(5, 10) );
 */
  // Step section:

  STEPCAFControl_Reader Reader;

  // Create XDE document and app for step data
  t_DocAppStruct stepDocApp = ::createDoc();
  Handle(TDocStd_Application) stepApp = stepDocApp.app;
  Handle(TDocStd_Document) stepDoc = stepDocApp.doc;

  // Read CAD and associated data from file
  IFSelect_ReturnStatus outcome = Reader.ReadFile(filename);
  //
  if ( outcome != IFSelect_RetDone )
  {
    stepApp->Close(stepDoc);
  }

  if ( !Reader.Transfer(stepDoc) )
  {
    stepApp->Close(stepDoc);
  }

  // Tools for step doc
  Handle(XCAFDoc_ShapeTool)
    SST = XCAFDoc_DocumentTool::ShapeTool( stepDoc->Main() ); // Shape tool.
  Handle(XCAFDoc_ColorTool)
    SCT = XCAFDoc_DocumentTool::ColorTool( stepDoc->Main() ); // Color tool.

  // Get root label of step data to paste (sourceLabel)
  TDF_LabelSequence stepLabels;
  SST->GetShapes(stepLabels);
  TDF_Label sourceLabel = stepLabels.Value(1);

 
  // Copy source label of step doc to target label of project doc
  TDocStd_XLinkTool XLinkTool;
  XLinkTool.Copy(part1.GetLabel(), sourceLabel);
  ST->UpdateAssemblies();


  // Save project doc to step file
  STEPCAFControl_Writer Writer;
  // To make subshape names work, we have to turn on the following static
  // variable of OpenCascade.
  Interface_Static::SetIVal("write.stepcaf.subshapes.name", 1);
  // Write XDE document to file

  if ( !Writer.Transfer(doc, STEPControl_AsIs) )
  {
    std::cout << "The document cannot be translated or gives no result" << std::endl;
    app->Close(doc);
  }

  const IFSelect_ReturnStatus ret = Writer.Write(save_step_file_name);

  if ( ret != IFSelect_RetDone )
  {
    std::cout << "The document could not be written to file" << std::endl;
    app->Close(doc);
  }
  std::cout << "Document saved in STEP format." << std::endl;


 	PCDM_StoreStatus sstatus = app->SaveAs(doc, save_doc_file_name);
	//
	if (sstatus != PCDM_SS_OK)
	{
		app->Close(doc);

		std::cout << "Cannot write OCAF document." << std::endl;
		return 1;
	}

	app->Close(doc);
	return 0;
}
