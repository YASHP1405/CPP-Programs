
/*
20. Write a program to calculate electricity bill based on units consumed:

≤100 units → ₹1/unit
101–200 → ₹2/unit
200 → ₹3/uni*/
#include<iostream>
using namespace std;
int elcbill(int units);

int main(){
    int units;
    cout<<"Enter the number of units consumed: ";
    cin>>units;
    int bill=elcbill(units);
    cout<<"The electricity bill is: ₹"<<bill<<endl;
    return 0;
}
int elcbill(int units){
    int bill;
    if(units<=100){
        bill=units*1;
    }
    else if(units>100 && units<=200){
        bill=100*1 + (units-100)*2;
    }
    else{
        bill=100*1 + 100*2 + (units-200)*3;
    }
    return bill;
}