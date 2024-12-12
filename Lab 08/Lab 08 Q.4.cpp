#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    // Input 5 numbers from the user
    cout << "Enter 5 numbers: \n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    // Display the array in reverse order
    cout << "Numbers in reverse order: \n";
    for (int i = SIZE - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}