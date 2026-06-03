// Access Specifiers

#include <iostream>
using namespace std;

// Base class
class Student {

private:
    // Private member
    float cgpa;

protected:
    // Protected member
    string department;

public:
    // Public members
    string name;
    int roll;

    // Public method to set private data
    void setCGPA(float c) {
        cgpa = c;
    }

    // Public method to access private data
    void displayCGPA() {
        cout << "CGPA: " << cgpa << endl;
    }

    // Public method to set protected data
    void setDepartment(string dept) {
        department = dept;
    }
};

// Derived class
class CollegeStudent : public Student {

public:

    void displayStudent() {

        // Accessing public members
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;

        // Accessing protected member
        cout << "Department: " << department << endl;

        // Cannot access private member directly
        // cout << cgpa;   ? ERROR
    }
};

int main() {

    // Creating object
    CollegeStudent s1;

    // Accessing public members
    s1.name = "Soumyadip";
    s1.roll = 33;

    // Setting values using public methods
    s1.setDepartment("Computer Science and Engineering");
    s1.setCGPA(8.9);

    // Displaying data
    s1.displayStudent();
    s1.displayCGPA();

    return 0;
}
