// Write a C++ program to calculate compound interest.


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float p = 1000, r = 5, t = 2, ci;

    ci = p * pow((1 + r/100), t) - p;

    cout << "Compound Interest = " << ci;

    return 0;
}
