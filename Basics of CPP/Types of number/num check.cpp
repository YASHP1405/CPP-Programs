// enter any number and check if it is a pos neg or zero and should stop when enterd -1 and couunt the pos neg and zero
#include <iostream>
using namespace std;
int main(){
    int num;
    int pos,neg,zero;

    do
    {
        cout<<"Enter any num: ";
        cin>>num;

    }
    while(num!=-1);
    if(num>0)
    {
        pos++;
    }
    else if(num<0)
    {
        neg++;
    }
    else
    {
        zero++;
    }
    cout<<"Positive numbers: "<<pos<<endl;
    cout<<"Negative numbers: "<<neg<<endl;
    cout<<"Zeros: "<<zero<<endl;
    return 0;

}