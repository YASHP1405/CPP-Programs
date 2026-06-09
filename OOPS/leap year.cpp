 // Check whether a given year is a leap year. 
#include<iostream>
using namespace std;
void leapyear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            } else {
                cout << year << " is not a leap year." << endl;
            }
        } else {
            cout << year << " is a leap year." << endl;
        }
    } else {
        cout << year << " is not a leap year." << endl;
    }
}
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    leapyear(year);
    return 0;
}