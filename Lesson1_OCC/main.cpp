#include <iostream>
#include <BRepPrimAPI_MakeBox.hxx>

using namespace std;

int main()
{
BRepPrimAPI_MakeBox mkBox(1., 2., 3.);
// const TopoDS_Shape& shape = mkBox.Shape();
cout << "Hello, Doug!" << endl;
return 0;
}
