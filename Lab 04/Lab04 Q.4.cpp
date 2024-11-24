#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define the strings
    string str1 = "Hello";
    string str2 = "Hi";
    string str3 = "Air";
    string str4 = "Bill";
    string str5 = "Big";

    // Compare the strings and find the smallest one
    string smallest = str1;

    if (str2 < smallest) {
        smallest = str2;
    }
    if (str3 < smallest) {
        smallest = str3;
    }
    if (str4 < smallest) {
        smallest = str4;
    }
    if (str5 < smallest) {
        smallest = str5;
    }

    // Display the smallest string
    cout << "The smallest string is: " << smallest << endl;

    return 0;
}
