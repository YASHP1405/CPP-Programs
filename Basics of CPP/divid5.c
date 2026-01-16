/* 
11. Write a program to check whether a number is divisible by 5.
*/
#include <iostream>
using namespace std;
int checkDivisibility(int number);
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (checkDivisibility(number)) {
        cout << number << " is divisible by 5." << endl;
    } else {
        cout << number << " is not divisible by 5." << endl;
    }

    return 0;
}
int checkDivisibility(int number) {
    return (number % 5 == 0);
}