// Swastik pattern 
#include<iostream>
using namespace std;
int main (){
    int i,j;

    for(i=1;i<=11;i++)
    {
        for(j=1;j<=11;j++)
        if((i==1 && j>6) || (i==6 && j<6) || (i==11 && j<6) || (j==1 && i>6) || (j==6 && i<6) || (j==11 && i>6))
        {
            cout<< " * " << endl;
        }
        else 
        {
            cout << "   ";
        }
}
return 0;
}