// Write a C++ program to demonstrate hierarchical inheritance.


#include <iostream>
using namespace std;

// Parent class
class Animal {

public:

    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Child class 1
class Dog : public Animal {

public:

    void bark() {
        cout << "Dog is barking" << endl;
    }
};

// Child class 2
class Cat : public Animal {

public:

    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

// Child class 3
class Cow : public Animal {

public:

    void milk() {
        cout << "Cow gives milk" << endl;
    }
};

int main() {

    Dog d1;
    Cat c1;
    Cow cw1;

    // Dog object
    d1.eat();
    d1.bark();

    cout << endl;

    // Cat object
    c1.eat();
    c1.meow();

    cout << endl;

    // Cow object
    cw1.eat();
    cw1.milk();

    return 0;
}
