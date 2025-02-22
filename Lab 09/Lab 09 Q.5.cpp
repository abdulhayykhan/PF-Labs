#include <iostream>
#include <string>
using namespace std;

int main() {
    string cities[5];

    cout << "Enter names of 5 cities:\n";
    for (int i = 0; i < 5; i++) {
        cout << "City " << i + 1 << ": ";
        getline(cin, cities[i]);
    }

    cout << "\nCities starting with 'K':\n";
    for (const string &city : cities) {
        if (!city.empty() && (city[0] == 'K' || city[0] == 'k')) {
            cout << city << endl;
        }
    }
    return 0;
}
