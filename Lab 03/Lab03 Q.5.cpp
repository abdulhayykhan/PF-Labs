#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;

    // Input dividend and divisor
    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    // Calculate quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Display the results
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;

    return 0;
}
