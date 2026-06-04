// Write a C++ program to count vowels in a string.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Education";
    int count = 0;

    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }

    cout << "Vowels Present = " << count;

    return 0;
}
