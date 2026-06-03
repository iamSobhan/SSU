// Write a C++ program to read data from a file.


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string data;

    ifstream file("ssu.txt");

    getline(file, data);

    cout << data;

    file.close();

    return 0;
}
