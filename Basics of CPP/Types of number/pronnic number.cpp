// Pronic number
#include<iostream>
using namespace std;
int main(){
    
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
  for (int i = 0; i < n; i++)
    {
        if (n==i*(i+1))
        {
            cout<<"The number is a pronic number.";
            
        }
        else
        {
            cout<<"The number is not a pronic number.";
        }
    }
    
    return 0;
}