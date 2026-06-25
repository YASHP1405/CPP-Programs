//   Validate a 4-digit PIN (check length and if it contains only digits). 
#include <iostream>
#include <string>
using namespace std;

int validpin(string pin) {
    if (pin.length() != 4) {
        return 0; // Invalid length
    }
    for (char c : pin) {
        if (!isdigit(c)) {
            return 0; // Contains non-digit characters
        }
    }
    return 1; // Valid PIN
}

int main() {
    string pin;
    cout << "Enter a 4-digit PIN: ";
    cin >> pin;

    if (validpin(pin)) {
        cout << "Valid PIN." << endl;
    } else {
        cout << "Invalid PIN. Please ensure it is 4 digits long and contains only numbers." << endl;
    }

    return 0;
}