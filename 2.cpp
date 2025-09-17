#include <iostream>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main() {
    double a, V, S;

    cout << "Enter a: ";
    cin >> a;

    V = pow(a, 3);
    S = 6 * pow(a, 2);

    cout << "V = " << V << endl;
    cout << "S = " << S << endl;
    
    return 0;
}