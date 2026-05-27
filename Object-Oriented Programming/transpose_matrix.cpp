// Write a C++ program to find the Transpose of a Matrix.


#include <iostream>
using namespace std;

int main() {
    int a[2][2] = {{1,2},{3,4}};

    cout << "Transpose Matrix:" << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
