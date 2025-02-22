#include <iostream>
using namespace std;
int main() {
    int upperLimit;
    cout << "Enter upper limit: ";
    cin >> upperLimit;
    for (int i = 1; i <= upperLimit; i++) {
        cout << i << " ";
    }
    return 0;
}
