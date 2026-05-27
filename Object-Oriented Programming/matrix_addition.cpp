// Write a C++ program to perform Matrix Addition.


#include <iostream>
using namespace std;

int main() {
    int a[2][2] = {{7,2},{5,4}};
    int b[2][2] = {{9,6},{3,8}};
    int sum[2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Matrix Addition:" << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
