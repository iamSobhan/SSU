// Write a C++ program to find the power of a number.


#include <iostream>
using namespace std;

int main() {
    int base = 2, power = 3, result = 1;

    for(int i = 1; i <= power; i++) {
        result *= base;
    }

    cout << "Result = " << result;

    return 0;
}
