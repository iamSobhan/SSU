// Write a C++ program to find the sum of even numbers from 1 to 10.


#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0)
            sum += i;
    }

    cout << "Sum = " << sum;

    return 0;
}
