#include <iostream>
#include <BRepPrimAPI_MakeBox.hxx>

#include <IVtkTools_ShapeDataSource.hxx>

#include <vtkNew.h>
#include <vtkAutoInit.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkPolyDataMapper.h>

VTK_MODULE_INIT(vtkRenderingOpenGL2)
VTK_MODULE_INIT(vtkInteractionStyle)

using namespace std;

int main()
{
BRepPrimAPI_MakeBox mkBox(1., 2., 3.);
const TopoDS_Shape& shape   = mkBox.Shape();

vtkNew<vtkRenderWindow> renwin;
vtkNew<vtkRenderer> ren;
renwin->AddRenderer(ren);

vtkNew<vtkInteractorStyleTrackballCamera> istyle;
vtkNew<vtkRenderWindowInteractor> iren;
//
iren->SetInteractorStyle(istyle);
iren->SetRenderWindow(renwin);

// Domain Data (TopoDS_Shape) -> vtkPolyData -> filter -> filter -> ... -> mapper -> actor

vtkNew<IVtkTools_ShapeDataSource> occSource;
occSource->SetShape( new IVtkOCC_Shape(shape) );

vtkNew<vtkPolyDataMapper> mapper;

mapper->SetInputConnection( occSource->GetOutputPort() );

vtkNew<vtkActor> actor;
actor->SetMapper(mapper);
ren->AddActor(actor);

renwin->Render();
iren->Start();

// const TopoDS_Shape& shape = mkBox.Shape();
cout << "Hello, Doug!" << endl;
return 0;
}