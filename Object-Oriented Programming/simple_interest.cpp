// Write a C++ program to calculate simple interest.


#include <iostream>
using namespace std;

int main() {
    float p = 1000, r = 5, t = 2, si;

    si = (p * r * t) / 100;

    cout << "Simple Interest = " << si;

    return 0;
}
