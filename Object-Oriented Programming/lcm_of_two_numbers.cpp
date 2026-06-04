// Write a C++ program to find the LCM (Least Common Multiple) of two numbers.


#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 18, max;

    max = (a > b) ? a : b;

    while(true) {
        if(max % a == 0 && max % b == 0) {
            cout << "LCM pf these numbers = " << max;
            break;
        }
        max++;
    }

    return 0;
}
