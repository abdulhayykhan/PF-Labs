#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (9.0/5.0)*celsius+32;

    // Display the temperature in Fahrenheit
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
