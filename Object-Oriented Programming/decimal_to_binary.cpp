// Write a C++ program to convert a Decimal number to Binary.


#include <iostream>
using namespace std;

int main() {
    int num = 10, binary[10], i = 0;

    while(num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    cout << "Binary = ";

    for(int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

    return 0;
}
