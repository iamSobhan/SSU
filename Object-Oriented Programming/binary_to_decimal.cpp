// Write a C++ program to convert a Binary number to Decimal.


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary = 1010, decimal = 0, i = 0, rem;

    while(binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }

    cout << "Decimal = " << decimal;

    return 0;
}
