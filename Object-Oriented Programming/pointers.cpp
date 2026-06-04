// Write a C++ program to demonstrate the use of pointers.


#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;

    cout << "Value = " << *ptr;

    return 0;
}
