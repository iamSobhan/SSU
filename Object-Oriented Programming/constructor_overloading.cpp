// Write a C++ program to demonstrate constructor overloading.


#include <iostream>
using namespace std;

class Mining {
public:
   Mining() {
        cout << "Default Constructor" << endl;
    }

    Mining(int x) {
        cout << "Parameterized Constructor = " << x;
    }
};

int main() {
    Mining m1;
    Mining m2(10);

    return 0;
}
