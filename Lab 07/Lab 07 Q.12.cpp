#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int number, original, remainder, result = 0, n = 0;
    cout << "Enter a number: ";
    cin >> number;
    original = number;
    while (original != 0) {
        original /= 10;
        n++;
    }
    original = number;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }
    if (result == number)
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";
    return 0;
}
