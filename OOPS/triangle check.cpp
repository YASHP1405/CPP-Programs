//  Classify a triangle as equilateral, isosceles, or scalene based on its sides. 
#include <iostream>
using namespace std;
int triangle_identification(int a, int b, int c)
{
    if(a == b && b == c)
    {
        return 1; // Equilateral
    }
    else if(a == b || b == c || a == c)
    {
        return 2; // Isosceles
    }
    else
    {
        return 3; // Scalene
    }
}
int main()
{
    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    
    int result = triangle_identification(a, b, c);
    
    if(result == 1)
    {
        cout << "The triangle is equilateral." << endl;
    }
    else if(result == 2)
    {
        cout << "The triangle is isosceles." << endl;
    }
    else
    {
        cout << "The triangle is scalene." << endl;
    }
    
    return 0;
}