#include <iostream>
using namespace std;
int main() {
    int choice;
    double celsius, fahrenheit, kelvin;
    cout << "Choose conversion type:\n1. Celsius to Fahrenheit\n2. Celsius to Kelvin\n";
    cin >> choice;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    if (choice == 1) {
        fahrenheit = (celsius * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    } else if (choice == 2) {
        kelvin = celsius + 273.15;
        cout << "Temperature in Kelvin: " << kelvin << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
