// Write a C++ program to demonstrate union.


#include <iostream>
using namespace std;

union Demo {
    int x;
    char ch;
};

int main() {
    Demo d;

    d.x = 65;

    cout << d.x;

    return 0;
}
