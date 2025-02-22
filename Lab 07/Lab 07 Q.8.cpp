#include <iostream>
using namespace std;
int main() {
    int number, reverse = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    cout << "Reversed number: " << reverse;
    return 0;
}
