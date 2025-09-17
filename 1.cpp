#include <iostream>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main() {

    double x, y;

    cout << "Enter x: ";
    cin >> x;

    y = pow(x, 3) -4 * pow(x, 2) - 5 * x + 9 + cos(x);
    
    cout << "y = " << y << endl;

    return 0;
}