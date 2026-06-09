//   Check if an alphabet is uppercase or lowercase. 
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter." << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    } else {
        cout << ch << " is not an alphabet." << endl;
    }
    return 0;
}