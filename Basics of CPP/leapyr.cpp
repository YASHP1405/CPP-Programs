/*13. Write a program to check whether a year is a leap year or not.*/
#include<iostream>
using namespace std;
void checkleapyear();


int main(){
    checkleapyear();
    return 0;
}

void checkleapyear()
{
    int year;
    cout << "Enter the year to check it :- ";
    cin >> year;
    if(year %4 ==0)
{
    cout << year << " is a leap year.";
} 
else
{
    cout << year << " is not a leap year.";
}
}