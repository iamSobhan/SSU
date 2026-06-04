// Write a C++ program to check whether a year is a Leap Year or not.


#include <iostream>
using namespace std;

int main() {
    int year = 2027;

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "This year is a Leap Year";
    else
        cout << "This is not a Leap Year";

    return 0;
}
