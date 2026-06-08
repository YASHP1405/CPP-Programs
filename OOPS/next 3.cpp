// 14. Take a character input and print its next 3 consecutive characters. 
#include <iostream>
using namespace std;
void nextThreeCharacters(char ch) {
    cout << "Next 3 consecutive characters after '" << ch << "': ";
    for (int i = 1; i <= 3; ++i) {
        cout << static_cast<char>(ch + i) << " ";
    }
    cout << endl;
}
int main() {
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;
    nextThreeCharacters(inputChar);
    return 0;
}