#include <iostream>
using namespace std;
// Function to print Rhombus Star Pattern
void printRhombus(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Hollow Rhombus Star Pattern
void printHollowRhombus(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print Mirrored Rhombus Star Pattern
void printMirroredRhombus(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Hollow Mirrored Rhombus Star Pattern
void printHollowMirroredRhombus(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print Right Triangle Star Pattern
void printRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Hollow Right Triangle Star Pattern
void printHollowRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print Mirrored Right Triangle Star Pattern
void printMirroredRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Hollow Mirrored Right Triangle Star Pattern
void printHollowMirroredRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print Inverted Right Triangle Star Pattern
void printInvertedRightTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Hollow Inverted Right Triangle Star Pattern
void printHollowInvertedRightTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print Inverted Mirrored Right Triangle Star Pattern
void printInvertedMirroredRightTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Pyramid Star Pattern
void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Hollow Pyramid Star Pattern
void printHollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print Inverted Pyramid Star Pattern
void printInvertedPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Hollow Inverted Pyramid Star Pattern
void printHollowInvertedPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print Half Diamond Star Pattern
void printHalfDiamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Mirrored Half Diamond Star Pattern
void printMirroredHalfDiamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}
// Function to print Diamond Star Pattern
void printDiamond(int n) {
    printPyramid(n);
    printInvertedPyramid(n);
}
// Function to print Hollow Diamond Star Pattern
void printHollowDiamond(int n) {
    printHollowPyramid(n);
    printHollowInvertedPyramid(n);
}
// Function to print Right Arrow Star Pattern
void printRightArrow(int n) {
    printPyramid(n);
    printInvertedRightTriangle(n);
}
// Function to print Left Arrow Star Pattern
void printLeftArrow(int n) {
    printInvertedRightTriangle(n);
    printPyramid(n);
}
// Function to print Plus Star Pattern
void printPlus(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == n / 2 + 1 || i == n / 2 + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print X Star Pattern
void printX(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print Eight Star Pattern
void printEight(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || (i == j && i <= n / 2) || (i + j == n + 1 && i <= n / 2))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
// Function to print Heart Star Pattern
void printHeart(int n) {
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int j = 1; j <= (i * 2) - 1; j++)
            cout << "*";
        cout << endl;
    }
}
// Main function to execute the star patterns
int main() {
    int n = 5; 
    cout << "Rhombus Star Pattern:\n";
    printRhombus(n);
    cout << "\nHollow Rhombus Star Pattern:\n";
    printHollowRhombus(n);
    cout << "\nMirrored Rhombus Star Pattern:\n";
    printMirroredRhombus(n);
    cout << "\nHollow Mirrored Rhombus Star Pattern:\n";
    printHollowMirroredRhombus(n);
    cout << "\nRight Triangle Star Pattern:\n";
    printRightTriangle(n);
    cout << "\nHollow Right Triangle Star Pattern:\n";
    printHollowRightTriangle(n);
    cout << "\nMirrored Right Triangle Star Pattern:\n";
    printMirroredRightTriangle(n);
    cout << "\nHollow Mirrored Right Triangle Star Pattern:\n";
    printHollowMirroredRightTriangle(n);
    cout << "\nInverted Right Triangle Star Pattern:\n";
    printInvertedRightTriangle(n);
    cout << "\nHollow Inverted Right Triangle Star Pattern:\n";
    printHollowInvertedRightTriangle(n);
    cout << "\nInverted Mirrored Right Triangle Star Pattern:\n";
    printInvertedMirroredRightTriangle(n);
    cout << "\nPyramid Star Pattern:\n";
    printPyramid(n);
    cout << "\nHollow Pyramid Star Pattern:\n";
    printHollowPyramid(n);
    cout << "\nInverted Pyramid Star Pattern:\n";
    printInvertedPyramid(n);
    cout << "\nHollow Inverted Pyramid Star Pattern:\n";
    printHollowInvertedPyramid(n);
    cout << "\nHalf Diamond Star Pattern:\n";
    printHalfDiamond(n);
    cout << "\nMirrored Half Diamond Star Pattern:\n";
    printMirroredHalfDiamond(n);
    cout << "\nDiamond Star Pattern:\n";
    printDiamond(n);
    cout << "\nHollow Diamond Star Pattern:\n";
    printHollowDiamond(n);
    cout << "\nRight Arrow Star Pattern:\n";
    printRightArrow(n);
    cout << "\nLeft Arrow Star Pattern:\n";
    printLeftArrow(n);
    cout << "\nPlus Star Pattern:\n";
    printPlus(n);
    cout << "\nX Star Pattern:\n";
    printX(n);
    cout << "\nEight Star Pattern:\n";
    printEight(n);
    cout << "\nHeart Star Pattern:\n";
    printHeart(n);
    return 0;
}
