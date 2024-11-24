#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    // Input two float numbers
    cout << "Enter the first float number: ";
    cin >> num1;
    cout << "Enter the second float number: ";
    cin >> num2;

    // Type casting to integer
    int intNum1 = static_cast<int>(num1);
    int intNum2 = static_cast<int>(num2);

    // Display the result
    cout << "Remainder of " << intNum1 << " % " << intNum2 << " is: " << intNum1%intNum2 << endl;

    return 0;
}
