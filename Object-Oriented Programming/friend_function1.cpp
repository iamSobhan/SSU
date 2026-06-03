// Write a C++ program to demonstrate the use of friend function.


#include <iostream>
using namespace std;

class Student {

private:
    int marks;

public:

    Student() {
        marks = 90;
    }

    // Friend function declaration
    friend void display(Student s);
};

// Friend function definition
void display(Student s) {

    // Accessing private member
    cout << "Marks: " << s.marks << endl;
}

int main() {

    Student s1;

    // Calling friend function
    display(s1);

    return 0;
}
