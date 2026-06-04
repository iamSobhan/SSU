// Write a C++ program to demonstrate abstract class.


#include <iostream>
using namespace std;

class Demo {
public:
    virtual void display() = 0;
};

class Test : public Demo {
public:
    void display() {
        cout << "Abstract Method";
    }
};

int main() {
    Test t;

    t.display();

    return 0;
}
