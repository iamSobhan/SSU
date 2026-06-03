// Write a C++ program to demonstrate the use of classes and objects.


#include <iostream>
#include <string>

using namespace std;

// Creating a Student class
class Student {
public:
    string name;
    int roll;
    string department;
    float cgpa;
};

int main() {

    // Creating first object
    Student stuObj1;
    stuObj1.name = "Arabinda";
    stuObj1.roll = 101;
    stuObj1.department = "Computer Science and Engineering";
    stuObj1.cgpa = 8.7;

    // Creating second object
    Student stuObj2;
    stuObj2.name = "Rohan";
    stuObj2.roll = 102;
    stuObj2.department = "Electronics and Communication Engineering";
    stuObj2.cgpa = 8.2;

    // Printing student details
    cout << stuObj1.name << " "
         << stuObj1.roll << " "
         << stuObj1.department << " "
         << stuObj1.cgpa << endl;

    cout << stuObj2.name << " "
         << stuObj2.roll << " "
         << stuObj2.department << " "
         << stuObj2.cgpa << endl;

    return 0;
}
