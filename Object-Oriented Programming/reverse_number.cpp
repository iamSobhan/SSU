// Reverse a Number


#include <iostream>
using namespace std;

int main() {
    int num = 123, reverse = 0;

    while(num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    cout << "Reverse = " << reverse;

    return 0;
}
