#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    for (char c : input) {
        if (c == 'a' || c == 'A') { // Counts both lowercase and uppercase 'a'
            count++;
        }
    }

    cout << "The number of 'a's in the string: " << count << endl;
    return 0;
}
