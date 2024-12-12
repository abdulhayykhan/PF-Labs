#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, current = 2; // Start with the first even number

    // Input the number
    cout << "Enter a positive number: ";
    cin >> number;

    // Use a do-while loop to find and sum even numbers
    do {
        if (current > number) break; // Ensure we don't exceed the given number
        sum += current;  // Add the even number to the sum
        current += 2;    // Move to the next even number
    } while (current <= number);

    // Display the result
    cout << "The sum of all even numbers up to " << number << " is: " << sum << endl;

    return 0;
}


































