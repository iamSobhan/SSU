// Write a C++ program to demonstrate class template.


#include <iostream>
using namespace std;

template <class T>
class Demo {
public:
    T data;

    Demo(T x) {
        data = x;
    }

    void show() {
        cout << data;
    }
};

int main() {
    Demo<int> d(100);

    d.show();

    return 0;
}
