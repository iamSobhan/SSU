// Write a C++ program to print the multiplication table from 1 to 5.


#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i*j << endl;
        }
        cout << endl;
    }

    return 0;
}
