#include <iostream>
#include <limits>
using namespace std;

int main() {
    float numbers[10];
    float greatest = -numeric_limits<float>::infinity();
    float secondGreatest = -numeric_limits<float>::infinity();

    // Taking 10 float numbers from the user
    cout << "Enter 10 float numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];

        // Update greatest and second greatest numbers
        if (numbers[i] > greatest) {
            secondGreatest = greatest;
            greatest = numbers[i];
        } else if (numbers[i] > secondGreatest && numbers[i] != greatest) {
            secondGreatest = numbers[i];
        }
    }

    if (secondGreatest == -numeric_limits<float>::infinity()) {
        cout << "There is no distinct second greatest number." << endl;
    } else {
        cout << "The second greatest number is: " << secondGreatest << endl;
    }

    return 0;
}
