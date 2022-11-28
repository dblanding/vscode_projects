/*
Implementation of OCC23950 in QABugs_19.cxx
https://git.dev.opencascade.org/gitweb/?p=occt.git;a=blob;f=src/QABugs/QABugs_19.cxx;h=aa5c34d64b42446d50113f48b132140ce30a1461;hb=b6c0b841ec13bccd36cab3d6525859cb0118cc21
This code is 20 years old and the syntax looks pretty archaic compared with
the syntax used in Quaoar's workshop lessons.
It's probably not a very good use of my time to study this and learn from it.
Instead, I think it would be better to use Quaoar's code as a starting point
and build from there.
*/

// Created on: 2002-05-21
// Created by: QA Admin
// Copyright (c) 2002-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <TopoDS_Shape.hxx>
#include <TDocStd_Application.hxx>
#include <TDF_Label.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Ax1.hxx>
#include <GCE2d_MakeSegment.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <DrawTrSurf.hxx>
#include <TDataStd_Name.hxx>
#include <Precision.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <TopLoc_Location.hxx>
#include <Quantity_Color.hxx>

#include <cstdio>
#include <cmath>
#include <iostream>
#include <OSD_PerfMeter.hxx>
#include <OSD_Timer.hxx>
#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeSphere.hxx>
#include <NCollection_Map.hxx>
#include <NCollection_Handle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <GeomFill_Trihedron.hxx>
#include <BRepOffsetAPI_MakePipe.hxx>
#include <XCAFDoc_ColorTool.hxx>
#include <XCAFDoc_DocumentTool.hxx>
#include <XCAFDoc_ShapeTool.hxx>
#include <TopLoc_Location.hxx>
#include <Standard_Version.hxx>
#include <STEPCAFControl_Writer.hxx>


//=======================================================================
//function : OCC23950
//purpose  :
//=======================================================================
int main()
{
  Handle(TDocStd_Document) aDoc = new TDocStd_Document ("dummy");
  TopoDS_Shape s6 = BRepPrimAPI_MakeBox (75, 50, 30);
  gp_Trsf t0;
  TopLoc_Location location0 (t0);

  TDF_Label lab1 = XCAFDoc_DocumentTool::ShapeTool (aDoc->Main ())->NewShape ();
  XCAFDoc_DocumentTool::ShapeTool (aDoc->Main ())->SetShape (lab1, s6);
  TDataStd_Name::Set(lab1, "Point1");

  TDF_Label labelA0 = XCAFDoc_DocumentTool::ShapeTool (aDoc->Main ())->NewShape ();
  TDataStd_Name::Set(labelA0, "ASSEMBLY");

  TDF_Label component01 = XCAFDoc_DocumentTool::ShapeTool (aDoc->Main ())->AddComponent (labelA0, lab1, location0);

  Handle(XCAFDoc_ColorTool)
    CT = XCAFDoc_DocumentTool::ColorTool( aDoc->Main() ); // Color tool.

  CT->SetColor( component01, Quantity_Color(1, 1, 0, Quantity_TOC_RGB), XCAFDoc_ColorCurv );
  XCAFDoc_DocumentTool::ColorTool (labelA0)->SetVisibility (component01, 0);

  STEPControl_StepModelType mode = STEPControl_AsIs;
  STEPCAFControl_Writer writer;
  if (! writer.Transfer (aDoc, mode))
  {
    std::cout << "The document cannot be translated or gives no result" << std::endl;
    return 1;
  }

  writer.Write ("/home/doug/Desktop/test_box_assembly.step");
  return 0;
}

