// Check if a number is an Armstrong Number (e.g., 153 = 1^3 + 5^3 + 3^3). 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, originalNum, remainder, result = 0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    int numDigits = to_string(num).size();

    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, numDigits);
        num /= 10;
    }

    if (result == originalNum) {
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }

    return 0;
}