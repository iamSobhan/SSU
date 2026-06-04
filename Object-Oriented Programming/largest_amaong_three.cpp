// Write a C++ program to find the largest among three numbers.


#include <iostream>
using namespace std;

int main() {
    int a = 30, b = 75, c = 15;

    if(a > b && a > c)
        cout << a << " a is largest number";
    else if(b > c)
        cout << b << " b is largest number";
    else
        cout << c << " c is largest number";

    return 0;
}
