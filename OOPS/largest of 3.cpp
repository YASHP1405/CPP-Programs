//   Find the largest among three numbers using nested if-else. 
#include <iostream>
using namespace std;    
void largest(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            cout << "Largest number is: " << a;
        }
        else
        {
            cout << "Largest number is: " << c;
        }
    }
    else
    {
        if(b>c)
        {
            cout << "Largest number is: " << b;
        }
        else
        {
            cout << "Largest number is: " << c;
        }
    }
}
int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    largest(a, b, c);
    return 0;
}