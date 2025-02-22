#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Invalid operator!" << endl;
    }
    return 0;
}
