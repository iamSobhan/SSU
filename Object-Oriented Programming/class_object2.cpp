// Write a C++ program to demonstrate the use of classes and objects.


#include <iostream>
#include <string>

using namespace std;

// Creating a Grocery class with some attributes
class Grocery {
public:
    string brand;
    string item;
    string variety;
    int amount;
};

int main() {

    // Creating first object
    Grocery groObj1;
    groObj1.brand = "ITC";
    groObj1.item = "Salt";
    groObj1.variety = "Rock Salt";
    groObj1.amount = 1;

    // Creating second object
    Grocery groObj2;
    groObj2.brand = "Emami";
    groObj2.item = "Lentils";
    groObj2.variety = "Moong Dal";
    groObj2.amount = 1;

    // Printing object values
    cout << groObj1.brand << " "
         << groObj1.item << " "
         << groObj1.variety << " "
         << groObj1.amount << "\n";

    cout << groObj2.brand << " "
         << groObj2.item << " "
         << groObj2.variety << " "
         << groObj2.amount << "\n";

    return 0;
}
