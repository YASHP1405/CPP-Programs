

 // 18. Write a program to check whether a number is positive, negative, or zero.
#include<iostream>
    using namespace std;
    void checknumber(int num);
    int main(){
        int number;
        cout<<"Enter a number: ";
        cin>>number;
        checknumber(number);
        return 0;
    }
    void checknumber(int num){
        if(num>0){
            cout<<"The number is positive.";
        }
        else if(num<0){
            cout<<"The number is negative.";
        }
        else{
            cout<<"The number is zero.";
        }
    }