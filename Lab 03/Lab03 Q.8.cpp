#include <iostream>
using namespace std;

int main() {
    int number, reverseNumber;

    // Input a three-digit number
    cout << "Enter a three-digit number: ";
    cin >> number;

    // Reverse the digits
    reverseNumber = (number % 10) * 100;    // Last digit to hundreds place
    number /= 10;

    reverseNumber += (number % 10) * 10;    // Middle digit to tens place
    number /= 10;

    reverseNumber += number;                // First digit to units place

    // Display the reversed number
    cout << "The number in reverse order is: " << reverseNumber << endl;

    return 0;
}
