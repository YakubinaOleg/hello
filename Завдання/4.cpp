#include <iostream>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main() {
    int n;
    
    cout << "Enter n(>99 and <1000): ";
    cin >> n;

    if (n <= 99 || n >= 1000) {
        cout << "Error: n must be greater than 99 and less than 1000." << endl;
        return 1;
    }

    int last_digit = n % 10;
    int first_two = n / 10;
    int reversed_n = last_digit * 100 + first_two;

    cout << "Reversed number: " << reversed_n << endl;
    return 0;
    
}