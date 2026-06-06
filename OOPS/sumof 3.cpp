// 7.  Given a 3-digit number, find the sum of its digits. 
#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    // Check if the number is a 3-digit number
    if (num < 100 || num > 999) {
        cout << "Please enter a valid 3-digit number." << endl;
        return 1; // Exit with an error code
    }

    // Calculate the sum of the digits
    while (num > 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10; // Remove the last digit
    }

    cout << "The sum of the digits is: " << sum << endl;
    return 0; // Exit with success
}
