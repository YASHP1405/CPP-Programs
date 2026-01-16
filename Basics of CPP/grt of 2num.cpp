/* 12. Write a program to find the greater of two numbers. */

#include<iostream>
using namespace std;
void greaterOfTwoNumbers() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if (num2 > num1) {
        cout << num2 << " is greater than " << num1 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
}
int main() {
    greaterOfTwoNumbers();
    return 0;
}
