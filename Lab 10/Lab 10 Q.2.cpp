#include <iostream>
using namespace std;

void reverseArray(int *arr, int size) {
    int *start = arr;          
    int *end = arr + size - 1; 

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
