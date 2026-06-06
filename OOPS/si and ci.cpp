// Calculate simple interest and compound interest. 
#include <iostream>
#include <cmath>
using namespace std;

int interest(int principal, float rate, int time) {
    return (principal * rate * time) / 100;
}   
int compound_interest(int principal, float rate, int time) {
    return principal * pow((1 + rate / 100), time) - principal;
}
int main() {
    int principal, time;
    float rate;
    
    cout << "Enter the principal amount: ";
    cin >> principal;
    
    cout << "Enter the rate of interest: ";
    cin >> rate;
    
    cout << "Enter the time (in years): ";
    cin >> time;
    
    int simpleInterest = interest(principal, rate, time);
    int compInterest = compound_interest(principal, rate, time);
    
    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Compound Interest: " << compInterest << endl;
    
    return 0;
}
