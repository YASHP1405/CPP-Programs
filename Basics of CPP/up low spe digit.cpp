/* 1. Write a program to check whether a character is:
Uppercase letter, Lowercase letter, Digit, Special character */

#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a character: ";
    cin >> x;
    if(x >= 65 && x <= 90){
        cout << "Uppercase letter" << endl;
    }
    else if(x >= 97 && x <= 122){
        cout << "Lowercase letter" << endl;
    }
    else if(x >= 48 && x <= 57){
        cout << "Digit" << endl;
    }
    else{
        cout << "Special character" << endl;
    }
    return 0;
}