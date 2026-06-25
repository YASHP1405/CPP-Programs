//  Check if a number is a "Harshad Number" (divisible by the sum of its digits).
#include <iostream>
using namespace std;

int isHarshad(int n) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (n % sum == 0) {
        return 1; // It's a Harshad Number
    } else {
        return 0; // Not a Harshad Number
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isHarshad(n)) {
        cout << n << " is a Harshad Number." << endl;
    } else {
        cout << n << " is not a Harshad Number." << endl;
    }

    return 0;
}