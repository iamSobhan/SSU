// Write a C++ program to demonstrate inline functions.


#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {

    cout << square(5);

    return 0;
}
