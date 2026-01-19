/*14. Write a program to check whether a number is a multiple of 3.
 */

#include <iostream>
using namespace std;

void checkmultiple(int n);   

int main() {
    int n;
    cout << "Enter the number to check whether it is multiple of 3 or not: ";
    cin >> n;

    checkmultiple(n);   
    return 0;
}

void checkmultiple(int n) {
    if (n % 3 == 0) {
        cout << "It is a multiple of 3: " << n << endl;
    }
    else {
        cout << "It is not a multiple of 3" << endl;
    }
}
