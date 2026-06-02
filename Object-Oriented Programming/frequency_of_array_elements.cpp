// Write a C++ program to count the frequency of elements in an array.


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,1};
    int count;

    for(int i=0; i<5; i++) {
        count = 1;

        for(int j=i+1; j<5; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}
