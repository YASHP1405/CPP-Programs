//  Convert a total number of days into years, weeks, and days. 
#include<iostream>
using namespace std;
int main(){
    int total_days, years, weeks, days;
    cout<<"Enter the total number of days: ";
    cin>>total_days;

    years = total_days / 365; // Calculate the number of years
    weeks = (total_days % 365) / 7; // Calculate the number of weeks
    days = (total_days % 365) % 7; // Calculate the remaining days

    cout<<total_days<<" days is equivalent to "<<years<<" years, "<<weeks<<" weeks, and "<<days<<" days."<<endl;

    return 0;
}   