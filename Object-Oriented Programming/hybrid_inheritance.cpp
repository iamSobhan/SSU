// Write a C++ program to demonstrate Hybrid Inheritance.


#include <iostream>
using namespace std;

// Base class
class Animal {

public:

    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Derived class 1
class Mammal : public Animal {

public:

    void walk() {
        cout << "Mammal can walk" << endl;
    }
};

// Derived class 2
class Bird : public Animal {

public:

    void fly() {
        cout << "Bird can fly" << endl;
    }
};

// Hybrid derived class
class Bat : public Mammal, public Bird {

public:

    void sound() {
        cout << "Bat makes sound" << endl;
    }
};

int main() {

    // Creating object
    Bat b1;

    // Accessing Mammal method
    b1.walk();

    // Accessing Bird method
    b1.fly();

    // Accessing own method
    b1.sound();

    // Ambiguity in Animal class
    // b1.eat(); 

    // Solving ambiguity using scope resolution
    b1.Mammal::eat();

    return 0;
}

