#include <iostream>
using namespace std;
int main() {
    int product = 1;
    for (int i = 1; i <= 10; i += 2) {
        product *= i;
    }
    cout << "Product of odd numbers from 1 to 10 is: " << product;
    return 0;
}
