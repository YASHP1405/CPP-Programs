//  19. Write a program to display the day of the week based on day number (1–7).
#include<iostream>
using namespace std;
void dayofweek(int day);
int main()
{
    int day;
    cout<<"Enter day number (1-7): ";
    cin>>day;
    dayofweek(day);
    return 0;
}
void dayofweek(int day)
{
    switch(day)
    {
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid day number!";
    }
}
