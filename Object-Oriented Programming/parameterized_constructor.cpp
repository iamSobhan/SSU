// Write a C++ program to demonstrate the use of parameterized constructor.


#include <iostream>
using namespace std;

class Demo {
public:
    Demo(int x) {
        cout << "Value = " << x;
    }
};

int main() {
    Demo d(10);

    return 0;
}
