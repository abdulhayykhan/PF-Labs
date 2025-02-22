#include <iostream>
using namespace std;
int main() {
    int upperLimit;
    cout << "Enter upper limit: ";
    cin >> upperLimit;
    cout << "Even numbers: ";
    for (int i = 2; i <= upperLimit; i += 2) cout << i << " ";
    cout << "\nOdd numbers: ";
    for (int i = 1; i <= upperLimit; i += 2) cout << i << " ";
    return 0;
}
