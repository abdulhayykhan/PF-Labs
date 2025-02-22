#include <iostream>
using namespace std;
int main() {
    int number, frequency[10] = {0};
    cout << "Enter a number: ";
    cin >> number;
    while (number != 0) {
        frequency[number % 10]++;
        number /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) cout << "Digit " << i << " occurs " << frequency[i] << " times\n";
    }
    return 0;
}
