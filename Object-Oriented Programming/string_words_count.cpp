// Write a C++ program to count words in a string.


#include <iostream>
using namespace std;

int main() {
    string str = "C++ is a Programming Language";
    int count = 1;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ')
            count++;
    }

    cout << "Words = " << count;

    return 0;
}
