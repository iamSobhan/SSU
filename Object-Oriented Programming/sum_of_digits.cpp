// Write a C++ program to find the sum of digits of a number.


#include <iostream>
using namespace std;

int main() {
    int num = 771224, sum = 0;

    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum = " << sum;

    return 0;
}
