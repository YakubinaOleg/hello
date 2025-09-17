#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <map>


using namespace std;

int main() {
    
    int K;
    cout << "Enter a day number: ";
    cin >> K;

    if (K < 1 || K > 365) {
        cout << "Invalid day number. Please enter a number between 1 and 365." << endl;
        return 1;
    }

    map<int, string> days = {
        {1, "Monday"},
        {2, "Tuesday"},
        {3, "Wednesday"},
        {4, "Thursday"},
        {5, "Friday"},
        {6, "Saturday"},
        {7, "Sunday"}
    };

    int day = (1 + K) % 7;
    if (day == 0) day = 7; 

    cout << "The day of the week is: " << days[day] << endl;
    return 0;
}