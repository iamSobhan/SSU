// Write a C++ program to perform swapping of two numbers.


#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, temp;

    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}



// Here a temporary variable is used for swapping.
