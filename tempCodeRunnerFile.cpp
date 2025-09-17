#include <iostream>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Enter coordinates of point 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of point 2 (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of point 3 (x3 y3): ";
    cin >> x3 >> y3;

    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    double P = side1 + side2 + side3;

    cout << "Perimeter P = " << P << endl;

    double s = P / 2;
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    cout << "Area = " << area << endl;
    return 0;
}