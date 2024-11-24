#include <iostream>
using namespace std;

int main() {
    char character;

    // Input character
    cout << "Enter a character: ";
    cin >> character;

    // Display ASCII code
    cout << "The ASCII code for '" << character << "' is: " << int(character) << endl;

    return 0;
}
