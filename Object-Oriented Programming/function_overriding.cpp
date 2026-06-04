// Write a C++ program to demonstrate function overriding.


#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent Function";
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child Function";
    }
};

int main() {
    Child c;

    c.show();

    return 0;
}



