/* 9. Write a program to check whether a given number is greater than 100.
*/

#include<iostream>
using namespace std;
int greaterThan100(int num);
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (greaterThan100(number))
        cout << number << " is greater than 100." << endl;
    else
        cout << number << " is not greater than 100." << endl;
    return 0;
}

int greaterThan100(int num){
return num > 100;
}
