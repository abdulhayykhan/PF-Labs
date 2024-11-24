#include <iostream>
using namespace std;

int main() {
    int number;

    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is less than, equal to, or greater than 10
    if (number < 10) {
        cout << "The number is less than 10." << endl;
    } else if (number == 10) {
        cout << "The number is equal to 10." << endl;
    } else {
        cout << "The number is greater than 10." << endl;
    }

    return 0;
}
