// Write a C++ program to demonstrate single inheritance.


#include <iostream>
using namespace std;

// Parent class
class Animal {

public:

    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Child class
class Dog : public Animal {

public:

    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {

    // Creating Dog object
    Dog d1;

    // Inherited method
    d1.eat();

    // Own method
    d1.bark();

    return 0;
}
