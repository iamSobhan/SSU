// Find Maximum in an Array


#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 8, 1, 15, 5};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    cout << "Maximum = " << max;

    return 0;
}
