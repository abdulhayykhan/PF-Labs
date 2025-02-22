#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result;
    cout << "Enter a string: ";
    getline(cin, input);

    for (char c : input) {
        if (isalpha(c)) {
            result += c;
        }
    }

    cout << "String with only alphabets: " << result << endl;
    return 0;
}
