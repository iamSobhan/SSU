// Write a C++ program to demonstrate the use of destructor.


#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called" << endl;
    }

    ~Demo() {
        cout << "Destructor Called";
    }
};

int main() {
    Demo d;

    return 0;
}
