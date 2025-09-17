#include <iostream>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main() {
    double a, b, c;
    
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double V = a * b * c;
    double S = 2 * (a * b + b * c + a * c);

    cout << "V: " << V << endl;
    cout << "S: " << S << endl;

    return 0;
}