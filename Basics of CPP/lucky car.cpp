// lucky car number 
#include<iostream>
using namespace std;
int main() {
    int num , sum = 0 , r; 
    cout<<"Enter a number: ";
    cin>>num;
    while(num!=0)
    {
        r = num%10;
        sum += r;
        num = num / 10;
    }
    if (sum % 3 == 0 || sum % 5 == 0  || sum % 7 == 0 )
    {
        cout<<"Lucky car number";
    }
    else
    {
        cout<<"Not a lucky car number";
    }
    return 0;

    }