#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    int n, num1, num2;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    int arr[n];

    // Input the array elements
    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Input the two numbers to find distances between
    cout << "Enter the two numbers to find distances: \n";
    cin >> num1 >> num2;

    int min_distance = numeric_limits<int>::max();
    int max_distance = -1;
    int last_position_num1 = -1;
    int last_position_num2 = -1;

    // Traverse the array to find minimum and maximum distances
    for (int i = 0; i < n; ++i) {
        if (arr[i] == num1) {
            if (last_position_num2 != -1) {
                int distance = abs(i - last_position_num2);
                min_distance = min(min_distance, distance);
                max_distance = max(max_distance, distance);
            }
            last_position_num1 = i;
        } else if (arr[i] == num2) {
            if (last_position_num1 != -1) {
                int distance = abs(i - last_position_num1);
                min_distance = min(min_distance, distance);
                max_distance = max(max_distance, distance);
            }
            last_position_num2 = i;
        }
    }

    if (min_distance == numeric_limits<int>::max()) {
        cout << "The two numbers do not both appear in the array." << endl;
    } else {
        cout << "The minimum distance between " << num1 << " and " << num2 << " is: " << min_distance << endl;
        cout << "The maximum distance between " << num1 << " and " << num2 << " is: " << max_distance << endl;
    }

    return 0;
}
