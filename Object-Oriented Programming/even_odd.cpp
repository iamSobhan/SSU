// Write a C++ program to check whether a number is Even or Odd.


#include <iostream>
using namespace std;

int main() {
    int num = 8;

    if(num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}


// % gives a remainder, if remainder is 0 - even.
