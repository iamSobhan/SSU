// Write a C++ program to copy one array into another array.


#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[5];

    for(int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Copied Array: ";

    for(int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
