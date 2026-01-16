/* 10. Write a program to check whether a character is a vowel or consonant.*/
#include<iostream>
using namespace std;
char checkVowelConsonant(char ch);

int main(){
    char character;
    cout << "Enter a character: ";
    cin >> character;
    char result = checkVowelConsonant(character);
    if(result == 'V'){
        cout << character << " is a vowel." << endl;
    } else {
        cout << character << " is a consonant." << endl;
    }
    return 0;
}


char checkVowelConsonant(char ch){
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
       ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return 'V'; // Vowel
    } else {
        return 'C'; // Consonant
    }
}
