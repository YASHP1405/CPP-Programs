#include <iostream>
using namespace std;

// Function with default argument
double power(double m, int n = 2) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * m;
    }
    return result;
}

int main() {
    double m;
    int n;

    cout << "Enter the value of m: ";
    cin >> m;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "m raised to power n = " << power(m, n) << endl;
    cout << "Square of m = " << power(m) << endl;

    return 0;
}
