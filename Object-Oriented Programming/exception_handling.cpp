// Write a C++ program to demonstrate exception handling.


#include <iostream>
using namespace std;

int main() {

    try {
        int a = 10, b = 0;

        if(b == 0)
            throw b;

        cout << a / b;
    }

    catch(int x) {
        cout << "Division by Zero Error";
    }

    return 0;
}
