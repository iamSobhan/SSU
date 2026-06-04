// Write a C++ program to demonstrate the use of static variable.


#include <iostream>
using namespace std;

class Demo {
public:
    static int count;
};

int Demo::count = 0;

int main() {
    Demo::count++;

    cout << Demo::count;

    return 0;
}
