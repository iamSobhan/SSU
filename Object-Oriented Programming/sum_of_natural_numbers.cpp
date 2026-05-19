// Write a C++ program to find the sum of natural numbers.


#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for(int i = 1; i <= 5; i++) {
        sum += i;
    }

    cout << "Sum = " << sum;

    return 0;
}
