// Write a C++ program to check whether a character is a vowel or consonant.


#include <iostream>
using namespace std;

int main() {
    char ch = 'c';

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        cout << "Vowel";
    else
        cout << "Consonant";

    return 0;
}
