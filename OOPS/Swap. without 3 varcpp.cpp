// Swap two numbers without using a third variable. 
// 6 - 6- 2026
#include<iostream>
using namespace std;

class Swap
{
    public:
    void swap(int &a, int &b)
    {
        a = a + b; // a now holds the sum of a and b
        b = a - b; // b now holds the original value of a
        a = a - b; // a now holds the original value of b
    }
};
int main(){
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Swap s;
    s.swap(x, y);

    cout << "After swapping: " << x << " " << y << endl;

    return 0;
}