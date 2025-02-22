#include <iostream>
using namespace std;
int main() {
    int number, firstDigit, lastDigit;
    cout << "Enter a number: ";
    cin >> number;
    lastDigit = number % 10;
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;
    cout << "First digit: " << firstDigit << "\nLast digit: " << lastDigit;
    return 0;
}
