// . Given an age, determine if a person is eligible to vote, work, or retire.

#include <iostream>
using namespace std;

void checkEligibility(int age) {
    if (age >= 18 && age < 65) {
        cout << "You are eligible to vote and work." << endl;
    } else if (age >= 65) {
        cout << "You are eligible to retire." << endl;
    } else {
        cout << "You are not eligible to vote, work, or retire." << endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    checkEligibility(age);

    return 0;
}