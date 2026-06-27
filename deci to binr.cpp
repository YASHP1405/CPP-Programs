//  Convert a Decimal number to Binary.
#include <iostream>
using namespace std;

int main() {
    int decimalNumber, binaryNumber = 0, remainder, base = 1;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * base;
        decimalNumber /= 2;
        base *= 10;
    }

    cout << "Binary representation: " << binaryNumber << endl;

    return 0;
}