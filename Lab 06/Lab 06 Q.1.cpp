#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    // Input the number
    cout << "Enter a positive number: ";
    cin >> number;

    // Outer loop iterates through numbers from 1 to the given number
    for (int i = 1; i <= number; i++) {
        // Inner loop extracts digits from the current number
        for (int temp = i; temp > 0; temp /= 10) {
            sum += temp % 10; // Add the last digit
        }
    }

    // Display the result
    cout << "The sum of all digits from 1 to " << number << " is: " << sum << endl;

    return 0;
}