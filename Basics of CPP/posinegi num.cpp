/* 
6. whether a number is positive or negative.
#include <iostream>
using namespace std;

void positivenegative(int num);

int main() {
    int num;
    cout << "Enter a number to check: ";
    cin >> num;

    positivenegative(num);
    return 0;
}

void positivenegative(int num) {
    if (num >= 0) {
        cout << "The entered number is positive";
    } else {
        cout << "The entered number is negative";
    }
}*/

#include <iostream>
using namespace std;

int positivenegative(int num);

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = positivenegative(num);

    if (result == 1)
        cout << "The number is positive";
    else
        cout << "The number is negative";

    return 0;
}

int positivenegative(int num) {
    if (num >= 0)
        return 1;   
    else
        return 0;   
}
