#include <iostream>
using namespace std;

int main() {
    const int daysInWeek = 7;
    float city1Temps[daysInWeek], city2Temps[daysInWeek];
    float city1MaxTemp = -1000, city2MaxTemp = -1000; // Initializing with a very low value
    int city1MaxDay = 0, city2MaxDay = 0;

    // Taking input for the temperatures of city 1 for the week
    cout << "Enter the temperatures for City 1 for 7 days:\n";
    for (int i = 0; i < daysInWeek; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> city1Temps[i];
    }

    // Taking input for the temperatures of city 2 for the week
    cout << "Enter the temperatures for City 2 for 7 days:\n";
    for (int i = 0; i < daysInWeek; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> city2Temps[i];
    }

    // Displaying the temperatures for both cities
    cout << "\nTemperatures for City 1:\n";
    for (int i = 0; i < daysInWeek; i++) {
        cout << "Day " << i + 1 << ": " << city1Temps[i] << "°C\n";
    }

    cout << "\nTemperatures for City 2:\n";
    for (int i = 0; i < daysInWeek; i++) {
        cout << "Day " << i + 1 << ": " << city2Temps[i] << "°C\n";
    }

    // Finding the hottest day for City 1
    for (int i = 0; i < daysInWeek; i++) {
        if (city1Temps[i] > city1MaxTemp) {
            city1MaxTemp = city1Temps[i];
            city1MaxDay = i + 1; // Day of the hottest temperature
        }
    }

    // Finding the hottest day for City 2
    for (int i = 0; i < daysInWeek; i++) {
        if (city2Temps[i] > city2MaxTemp) {
            city2MaxTemp = city2Temps[i];
            city2MaxDay = i + 1; // Day of the hottest temperature
        }
    }

    // Comparing which city has the hottest temperature
    if (city1MaxTemp > city2MaxTemp) {
        cout << "\nCity 1 had the hottest temperature of " << city1MaxTemp << "°C on Day " << city1MaxDay << ".\n";
    } else if (city2MaxTemp > city1MaxTemp) {
        cout << "\nCity 2 had the hottest temperature of " << city2MaxTemp << "°C on Day " << city2MaxDay << ".\n";
    } else {
        cout << "\nBoth cities had the same hottest temperature of " << city1MaxTemp << "°C.\n";
    }

    return 0;
}
