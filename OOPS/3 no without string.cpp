// 8.  Reverse a 3-digit number arithmetically (without strings). 
#include <iostream>
using namespace std;    
int main() {
    int num, reversedNum = 0;
    
    cout << "Enter a 3-digit number: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Please enter a valid 3-digit number." << endl;
        return 1;
    }

    while (num > 0) {
        int digit = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + digit; // Append the digit to the reversed number
        num /= 10; // Remove the last digit
    }

    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}