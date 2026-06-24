// 28. Check if a number is a multiple of both 3 and 7.
#include <iostream>
using namespace std;
void checkMultiple(int num) {
    if (num % 3 == 0 && num % 7 == 0) {
        cout << num << " is a multiple of both 3 and 7." << endl;
    } else {
        cout << num << " is not a multiple of both 3 and 7." << endl;
    }
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    checkMultiple(number);
    return 0;
}