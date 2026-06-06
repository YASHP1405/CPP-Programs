// Swap two numbers using a third variable. 
// 05-06-2024
#include<iostream>
using namespace std;
class Swap
{
    public:
    int a,b,temp;
    void getdata()
    {
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
    }
    void swap()
    {
        temp=a;
        a=b;
        b=temp;
    }
    void display()
    {
        cout<<"After swapping: "<<endl;
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};
int main()
{
    Swap s;
    s.getdata();
    s.swap();
    s.display();
    return 0;
}