#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, address;
    int age;

    // Input name
    cout << "Enter your name: ";
    getline(cin, name);

    // Input address
    cout << "Enter your address: ";
    getline(cin, address);
    // Input age
    cout << "Enter your age: ";
    cin >> age;
    // Display the data
    cout << "\n--- User Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Age: " << age << endl;
    return 0;
}
