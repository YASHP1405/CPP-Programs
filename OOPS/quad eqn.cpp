// Find all roots of a quadratic equation ax^2 + bx + c = 0. 
#include <iostream>
using namespace std;
int quadraticRoots(int a, int b, int c)
{
    int d = b * b - 4 * a * c;
    if (d > 0)
    {
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << (-b + sqrt(d)) / (2 * a) << endl;
        cout << "Root 2 = " << (-b - sqrt(d)) / (2 * a) << endl;
    }
    else if (d == 0)
    {
        cout << "Roots are real and same." << endl;
        cout << "Root 1 = Root 2 = " << -b / (2 * a) << endl;
    }
    else
    {
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << -b / (2 * a) << "+" << sqrt(-d) / (2 * a) << "i" << endl;
        cout << "Root 2 = " << -b / (2 * a) << "-" << sqrt(-d) / (2 * a) << "i" << endl;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    quadraticRoots(a, b, c);
    return 0;
}