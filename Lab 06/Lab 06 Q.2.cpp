#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, current = 2; // Start with the first even number

    // Input the number
    cout << "Enter a positive number: ";
    cin >> number;

    // Use a while loop to find and sum even numbers
    while (current <= number) {
        sum += current; // Add the even number to the sum
        current += 2;   // Move to the next even number
    }

    // Display the result
    cout << "The sum of all even numbers up to " << number << " is: " << sum << endl;

    return 0;
}
