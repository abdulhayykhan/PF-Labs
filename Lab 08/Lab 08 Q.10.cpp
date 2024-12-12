#include <iostream>
using namespace std;

void moveNegativesToEnd(int arr[], int n) {
    int positiveIndex = 0;

    // Move all positive numbers to the beginning of the array
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            arr[positiveIndex++] = arr[i];
        }
    }

    // Fill the rest of the array with negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[positiveIndex++] = arr[i];
        }
    }
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Move negative elements to the end
    moveNegativesToEnd(arr, n);

    // Output the modified array
    cout << "Array after moving negative elements to the end: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
