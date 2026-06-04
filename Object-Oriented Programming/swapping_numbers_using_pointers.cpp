// Write a C++ program to swap two numbers using pointers.


#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int *p1 = &a, *p2 = &b;
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}

