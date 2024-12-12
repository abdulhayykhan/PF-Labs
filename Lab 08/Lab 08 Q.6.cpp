#include <iostream>
#include <limits>
using namespace std;

int main() {
    float numbers[10];
    float smallest;

    // Taking input from the user
    cout << "Enter 10 float numbers: \n";
    for(int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Finding the smallest number in the array
    smallest = numbers[0];
    for(int i = 1; i < 10; i++) {
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Making the smallest number the greatest
    for(int i = 0; i < 10; i++) {
        if(numbers[i] == smallest) {
            numbers[i] = numeric_limits<float>::infinity();  // Temporary set to infinity
        }
    }

    // Replacing the smallest (temporary infinity) with the greatest value
    for(int i = 0; i < 10; i++) {
        if(numbers[i] == numeric_limits<float>::infinity()) {
            numbers[i] = smallest;
        }
    }

    // Printing the modified array
    cout << "Modified array with smallest number as the greatest: \n";
    for(int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
