// Write a C++ program to demonstrate structure.


#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
};

int main() {
    Student s;

    s.id = 1;
    s.name = "Amit";

    cout << s.id << endl;
    cout << s.name;

    return 0;
}
