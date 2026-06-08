// 15. Find the maximum of three numbers using the ternary operator.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "Maximum: " << max << endl;

    return 0;
}

//