// Write a C++ program to check whether a number is Palindrome or Not.


#include <iostream>
using namespace std;

int main() {
    int num = 121, temp, reverse = 0;

    temp = num;

    while(num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if(temp == reverse)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
