#include <iostream>
using namespace std;

int main() {
    float principal, rate, years, interest;

    // Input principal amount, interest rate, and number of years
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the interest rate (in %): ";
    cin >> rate;

    cout << "Enter the number of years: ";
    cin >> years;

    // Calculate interest
    interest = (principal*rate*years)/100;

    // Display the interest amount
    cout << "The interest amount for " << years << " years is: " << interest << endl;

    return 0;
}
