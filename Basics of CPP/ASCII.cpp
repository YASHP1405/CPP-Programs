//  Check if a given character is a printable ASCII character or a control character. 
#include<iostream>
using namespace std;

void checkASCII(char c) {
    if (c >= 32 && c <= 126) {
        cout << "The character '" << c << "' is a printable ASCII character." << endl;
    } else {
        cout << "The character '" << c << "' is a control character." << endl;
    }
}

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    checkASCII(c);

    return 0;
}