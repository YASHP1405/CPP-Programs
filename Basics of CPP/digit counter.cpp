// Count the total number of digits in an integer.
#include<iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    if (n == 0) {
        return 1; // Special case for 0
    }
    while (n != 0) {
        n /= 10; // Remove the last digit
        count++; // Increment the count
    }
    return count;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int digitCount = countDigits(number);
    cout << "The total number of digits in " << number << " is: " << digitCount << endl;

    return 0;
}