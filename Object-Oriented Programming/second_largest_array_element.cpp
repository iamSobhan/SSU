// Write a C++ program to find the second largest element in an array.


#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 40, 30};
    int largest = 0, second = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
    }

    cout << "Second Largest = " << second;

    return 0;
}

