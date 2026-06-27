 // 50 Convert a Binary number to Decimal. 
#include <iostream>
using namespace std;

int main() {
    long long binaryNumber;
    int decimalNumber = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    while (binaryNumber > 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }

    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}