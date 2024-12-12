#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking input for the size of the matrix
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int matrix[n][n];
    int leftDiagonalSum = 0;

    // Taking input for the matrix elements
    cout << "Enter the elements of the matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculating the sum of the left diagonal
    for (int i = 0; i < n; i++) {
        leftDiagonalSum += matrix[i][i]; // Adding elements where row index equals column index
    }

    // Outputting the result
    cout << "Sum of the left diagonal: " << leftDiagonalSum << endl;

    return 0;
}
