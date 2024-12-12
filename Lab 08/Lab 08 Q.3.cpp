#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    // Input 10 numbers from the user
    cout << "Enter 10 numbers: \n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    // Sort the array in ascending order
    sort(arr, arr + SIZE);

    // Display the sorted array in ascending order
    cout << "Numbers in ascending order: \n";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array in descending order
    sort(arr, arr + SIZE, greater<int>());

    // Display the sorted array in descending order
    cout << "Numbers in descending order: \n";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
