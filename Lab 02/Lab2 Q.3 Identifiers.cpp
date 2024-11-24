#include <iostream>

using namespace std;

int main() {
    // Different types of identifiers
    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;
    bool boolVar;
    long longVar;

    // Displaying sizes in bytes
    cout << "Size of int: " << sizeof(integerVar) << " bytes" << endl;
    cout << "Size of float: " << sizeof(floatVar) << " bytes" << endl;
    cout << "Size of double: " << sizeof(doubleVar) << " bytes" << endl;
    cout << "Size of char: " << sizeof(charVar) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(boolVar) << " bytes" << endl;
    cout << "Size of long: " << sizeof(longVar) << " bytes" << endl;

    return 0;
}
