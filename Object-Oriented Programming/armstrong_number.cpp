// Write a C++ program to check whether a number is an Armstrong Number or not.


#include <iostream>
using namespace std;

int main() {
    int num = 153, temp, sum = 0, rem;

    temp = num;

    while(temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if(sum == num)
        cout << "This is an Armstrong Number";
    else
        cout << "This is not an Armstrong Number";

    return 0;
}
