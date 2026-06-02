// Write a C++ program to demonstrate multilevel inheritance.


#include <iostream>
using namespace std;

// Grandparent class
class Animal {

public:

    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Parent class
class Mammal : public Animal {

public:

    void breathe() {
        cout << "Mammal is breathing" << endl;
    }
};

// Child class
class Dog : public Mammal {

public:

    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {

    // Creating object
    Dog d1;

    // Accessing grandparent method
    d1.eat();

    // Accessing parent method
    d1.breathe();

    // Accessing own method
    d1.bark();

    return 0;
}
