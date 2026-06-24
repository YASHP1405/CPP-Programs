// Pronic number 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,num;

    cout << "Enter a number :";
    cin >> num;
    n = sqrt(num);
    if (n*(n+1) == num){
        cout << "The number is a pronic number.";
    }
    else{
        cout << "The number is not a pronic number.";
    }
    return 0;

    
}