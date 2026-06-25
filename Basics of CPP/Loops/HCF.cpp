//  Find the Greatest Common Divisor (GCD) / Highest Common Factor (HCF) of two numbers. 
#include <iostream>
using namespace std;

class GCD {
public:
    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    GCD gcdCalculator;
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = gcdCalculator.findGCD(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}