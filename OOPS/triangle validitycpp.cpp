// Input three sides of a triangle and check if the triangle is valid. 
#include <iostream>
using namespace std;
int triangle_validity(int a, int b, int c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    if(triangle_validity(a, b, c))
    {
        cout << "The triangle is valid." << endl;
    }
    else
    {
        cout << "The triangle is not valid." << endl;
    }
    return 0;
}