//   Find the frequency of each digit in a given integer.
#include <iostream>
using namespace std;

void frequency(int num) {
    int freq[10] = {0}; // Array to store frequency of digits 0-9
    while (num != 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }   
    cout << "Frequency of each digit:" << endl;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << "Digit " << i << ": " << freq[i] << endl;
        }
    }
}
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    frequency(number);
    return 0;
}