// Write a C++ program to count the number of digits in a number.


#include <iostream>
using namespace std;

int main() {
    int num = 700061, count = 0;

    while(num != 0) {
        num /= 10;
        count++;
    }

    cout << "Digits = " << count;

    return 0;
}
