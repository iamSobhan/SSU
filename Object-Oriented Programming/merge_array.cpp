// Write a C++ program to merge two arrays.


#include <iostream>
using namespace std;

int main() {
    int a[] = {12,15,17};
    int b[] = {24,52,37};

    cout << "Merged Array: ";

    for(int i = 0; i < 3; i++)
        cout << a[i] << " ";

    for(int i = 0; i < 3; i++)
        cout << b[i] << " ";

    return 0;
}
