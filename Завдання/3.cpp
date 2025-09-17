#include <iostream>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main() {
    double a, b;

    cout << "Enter a and b: ";
    cin >> a >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "c = " << c << endl;

    double P = a + b + c;
    cout << "P = " << P << endl;    

    return 0;
}