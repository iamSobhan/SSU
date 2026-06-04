// Write a C++ program to find the minimum element in an array.


#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 3, 10, 1, 6};
    int min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min)
            min = arr[i];
    }

    cout << "Minimum Element = " << min;

    return 0;
}
