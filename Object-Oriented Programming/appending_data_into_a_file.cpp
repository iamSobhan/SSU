// Write a C++ program to append data into a file.


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("ssu.txt", ios::app);

    file << " Lionel Messi";

    file.close();

    cout << "Data Appended";

    return 0;
}
