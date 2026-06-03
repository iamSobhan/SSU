// Write a C++ program to perform selection sort.


#include <iostream>
using namespace std;

int main() {
    int arr[] = {64,25,12,22,11};
    int temp;

    for(int i = 0; i < 5; i++) {
        int min = i;

        for(int j = i+1; j < 5; j++) {
            if(arr[j] < arr[min])
                min = j;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}
