/* 8. Write a program to check whether a person is eligible to vote (age ≥ 18).*/
#include <iostream>
using namespace std;
int checkvoter(int age);
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    checkvoter(age);
    return 0;
}
int checkvoter(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}