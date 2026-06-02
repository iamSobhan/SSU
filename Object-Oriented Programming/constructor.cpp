// Constructor Demonstration


#include <iostream>
using namespace std;

class Student {

public:
    string name;
    int roll;

    // Constructor
    Student(string n, int r) {

        name = n;
        roll = r;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {

    // Object creation
    Student s1("Rohan", 27);

    s1.display();

    return 0;
}
