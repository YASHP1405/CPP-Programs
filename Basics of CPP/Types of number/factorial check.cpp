//  38. Find the factorial of a number using loops. 
#include<iostream>
using namespace std;

class Factorial {
    public:
        int calculateFactorial(int n) {
            int factorial = 1;
            for(int i = 1; i <= n; ++i) {
                factorial *= i;
            }
            return factorial;
        }
};
int main() {
    Factorial fact;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << fact.calculateFactorial(number) << endl;
    return 0;
}