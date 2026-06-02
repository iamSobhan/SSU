// Copy Constructor


#include <iostream>
using namespace std;

class Student {

public:

    string name;

    Student(string n) {
        name = n;
    }

    // Copy constructor
    Student(Student &s) {
        name = s.name;
    }
};

int main() {

    Student s1("Rohan");

    Student s2 = s1;

    cout << s2.name;

    return 0;
}
