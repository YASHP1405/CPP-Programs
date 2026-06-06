// Reverse a 3-digit number arithmetically (without strings).
#include <iostream>
using namespace std;
int main()
{
    int num, rev;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    cout << "Reversed number: " << rev << endl;
    return 0;
}
