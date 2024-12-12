#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[10];
    double sum = 0, x;

    // Input 10 integers from the user
    cout << "Enter 10 integers: \n";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Compute the average (x) of the 10 integers
    x = sum / 10;
    cout << "The average of the 10 entries is: " << x << endl;

    // Find entries greater than or equal to x
    vector<int> greater_or_equal;
    sum = 0; // Reset sum for the new average
    for (int i = 0; i < 10; ++i) {
        if (arr[i] >= x) {
            greater_or_equal.push_back(arr[i]);
            sum += arr[i];
        }
    }

    // Compute the average of the selected entries
    double final_average = 0;
    if (!greater_or_equal.empty()) {
        final_average = sum / greater_or_equal.size();
    }

    // Display the selected entries and their average
    cout << "Entries greater than or equal to the average: ";
    for (int num : greater_or_equal) {
        cout << num << " ";
    }
    cout << "\nThe average of these entries is: " << final_average << endl;

    return 0;
}
