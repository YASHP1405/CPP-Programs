//  Convert a given number of seconds into hours, minutes, and seconds
#include <iostream>
using namespace std;
void convertSeconds(int totalSeconds, int &hours, int &minutes, int &seconds) {
    hours = totalSeconds / 3600; // Calculate hours
    totalSeconds %= 3600; // Update totalSeconds to the remaining seconds after extracting hours
    minutes = totalSeconds / 60; // Calculate minutes
    seconds = totalSeconds % 60; // Remaining seconds
}
int main() {
    int totalSeconds, hours, minutes, seconds;
    
    cout << "Enter the total number of seconds: ";
    cin >> totalSeconds;
    
    convertSeconds(totalSeconds, hours, minutes, seconds);
    
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
    
    return 0;
}