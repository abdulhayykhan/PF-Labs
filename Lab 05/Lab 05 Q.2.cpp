#include <iostream>
using namespace std;
int main() {
    int angle1, angle2, angle3;
    cout << "Enter three angles of a triangle: ";
    cin >> angle1 >> angle2 >> angle3;
    if (angle1 + angle2 + angle3 == 180) {
        cout << "Triangle is valid." << endl;
    } else {
        cout << "Triangle is not valid." << endl;
    }
    return 0;
}
