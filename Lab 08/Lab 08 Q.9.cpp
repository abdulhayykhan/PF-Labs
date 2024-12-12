#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Taking input for the size of the 2D array
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];

    // Taking input for the 2D array elements
    cout << "Enter the elements of the 2D array: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    bool foundDuplicate = false;

    // Finding and printing duplicate values
    cout << "Duplicate values in the array: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = i; k < rows; k++) {
                for (int l = (k == i) ? j + 1 : 0; l < cols; l++) {
                    if (array[i][j] == array[k][l]) {
                        cout << array[i][j] << " ";
                        foundDuplicate = true;
                        break;
                    }
                }
            }
        }
    }

    if (!foundDuplicate) {
        cout << "No duplicate values found." << endl;
    }

    return 0;
}
