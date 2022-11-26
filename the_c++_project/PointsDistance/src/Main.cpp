#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

int main()
{
    double x1, y1, x2, y2;

    cout << "Enter the point 1 coords, separated by a space: ";
    cin >> x1 >> y1;

    cout << "Point 1 will be at (" << fixed << setprecision(2)
         << x1 << ", " << y1 << " )" << endl;

    cout << "Enter the point 2 coords, separated by a space: ";
    cin >> x2 >> y2;

    cout << "Point 2 will be at (" << fixed << setprecision(2)
         << x2 << ", " << y2 << " )" << endl;

    Point p1 = { x1, y1 };
    Point p2 = { x2, y2 };
    
    double d1 = p1.distance(p2);

    cout << "The distance between points is " << d1 << endl;

    return 0;
}