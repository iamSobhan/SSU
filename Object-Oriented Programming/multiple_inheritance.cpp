// Write a C++ program to demonstrate multiple inheritance.


#include <iostream>
using namespace std;

// First parent class
class Animal {

public:

    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Second parent class
class Pet {

public:

    void play() {
        cout << "Pet is playing" << endl;
    }
};

// Child class inheriting from both classes
class Dog : public Animal, public Pet {

public:

    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {

    // Creating object
    Dog d1;

    // Accessing first parent method
    d1.eat();

    // Accessing second parent method
    d1.play();

    // Accessing own method
    d1.bark();

    return 0;
}
