//  Compute the quotient and remainder of two numbers without using / or %. 
#include<iostream>
using namespace std;
void computeQuotientAndRemainder(int dividend, int divisor, int &quotient, int &remainder) {
    quotient = 0;
    remainder = dividend;

    while (remainder >= divisor) {
        remainder -= divisor;
        quotient++;
    }
}
int main() {
    int dividend, divisor, quotient, remainder;

    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    computeQuotientAndRemainder(dividend, divisor, quotient, remainder);

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}