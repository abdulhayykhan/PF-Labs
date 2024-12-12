#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int mostOccurring, maxCount = 0;

    // Taking input from the user
    cout << "Enter 10 numbers: \n";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Find the most occurring element
    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < 10; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
            }
        }
        // Update if this number occurs more times than the previous one
        if (count > maxCount) {
            maxCount = count;
            mostOccurring = numbers[i];
        }
    }

    // Output the result
    cout << "Most occurring element: " << mostOccurring << endl;
    cout << "Number of occurrences: " << maxCount << endl;

    return 0;
}
