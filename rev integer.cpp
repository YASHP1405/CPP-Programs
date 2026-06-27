// reverse an integer of any length. 
#include <iostream>
using namespace std;

void reverseInteger(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    cout << "Reversed Integer: " << reversed << endl;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    reverseInteger(number);
    return 0;
}