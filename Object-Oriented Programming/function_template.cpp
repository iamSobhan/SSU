// Write a C++ program to demonstrate function template.


#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {

    cout << add(5, 3);

    return 0;
}
