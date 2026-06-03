// Write a C++ program to demonstrate the use of classes and objects.


#include <iostream>
using namespace std;

class Car {
public:
    string color;

    void drive() {
        cout << "Car is moving" << endl;
    }
};

int main() {
    Car c1;        // object
    c1.color = "Red";
    c1.drive();

    return 0;
}
