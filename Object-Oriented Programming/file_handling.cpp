// Write a C++ program to demonstrate File Handling operations.


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("demo_c.txt");

    file << "This is how we do File Handling";
    file.close();

    cout << "Data Written Successfully...";

    return 0;
}
