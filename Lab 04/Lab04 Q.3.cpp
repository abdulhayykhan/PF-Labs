#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit, kelvin;
    int choice;

    // Display menu
    cout << "Temperature Conversion Program" << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Celsius to Kelvin" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Ask the user to enter the Celsius temperature
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Use if-else to process the user's choice
    if (choice == 1) {
        // Convert Celsius to Fahrenheit
        fahrenheit = (celsius * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " Degree Fahrenheit" << endl;
    } 
    else if (choice == 2) {
        // Convert Celsius to Kelvin
        kelvin = celsius + 273;
        cout << "Temperature in Kelvin: " << kelvin << "Kelvin" << endl;
    } 
    else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
