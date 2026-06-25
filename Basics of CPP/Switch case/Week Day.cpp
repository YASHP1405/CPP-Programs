// . Find the day of the week given a number from 1 to 7 using switch-case. 
#include <iostream>
using namespace std;

string weekDay(int day) {
    switch(day) {
        case 1:
            return "Sunday";
        case 2:
            return "Monday";
        case 3:
            return "Tuesday";
        case 4:
            return "Wednesday";
        case 5:
            return "Thursday";
        case 6:
            return "Friday";
        case 7:
            return "Saturday";
        default:
            return "Invalid day number. Please enter a number between 1 and 7.";
    }
}

int main() {
    int day;
    cout << "Enter a number between 1 and 7: ";
    cin >> day;

    cout << "The day is: " << weekDay(day) << endl;

    return 0;
}