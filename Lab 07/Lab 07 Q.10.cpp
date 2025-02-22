#include <iostream>
using namespace std;
int main() {
    int number, product = 1;
    cout << "Enter a number: ";
    cin >> number;
    while (number != 0) {
        product *= number % 10;
        number /= 10;
    }
    cout << "Product of digits: " << product;
    return 0;
}
