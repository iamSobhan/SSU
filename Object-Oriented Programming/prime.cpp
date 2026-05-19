// Write a C++ program to check whether a number is Prime or Not.


#include <iostream>
using namespace std;

int main() {
    int n = 7;
    bool prime = true;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }

    if(prime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
