//  Find the Least Common Multiple (LCM) of two numbers. 
#include <iostream>
using namespace std;

class LCM {
public:
    int findLCM(int a, int b) {
        int maxNum = (a > b) ? a : b; // Find the maximum of the two numbers
        int lcm = maxNum;

        // Keep checking multiples of the maximum number until we find the LCM
        while (true) {
            if (lcm % a == 0 && lcm % b == 0) {
                return lcm; // Return the LCM when found
            }
            lcm += maxNum; // Increment by the maximum number
        }
    }
};

int main() {
    LCM lcmCalculator;
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int lcm = lcmCalculator.findLCM(num1, num2);
    cout << "The Least Common Multiple (LCM) of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}