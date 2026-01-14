/* 4. Write a program to check whether a number is divisible by both 5 and 11. */

#include<iostream>
using namespace std;
int divisionCheck(int num);

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    divisionCheck(number);
    return 0;
}

int divisionCheck(int num){
    if(num%5==0 && num%11==0){
        cout<<"The number is divisible by both 5 and 11"<<endl;
    }
    else{
        cout<<"The number is not divisible by both 5 and 11"<<endl;
    }
    return 0;
}
