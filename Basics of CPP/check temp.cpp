/*15. Write a program to check whether a temperature is hot (>30°C) or normal.*/ 

#include <iostream>
using namespace std;

void checkTemperature(int Temp);   // function declaration

int main() {
    int Temp;
    cout << "Enter the temperature: ";
    cin >> Temp;

    checkTemperature(Temp);   // function call
    return 0;
}

void checkTemperature(int Temp) {
    if (Temp > 30) {
        cout << "It is Hot: " << Temp << "°C";
    }
    else {
        cout << "Temperature is Normal";
    }
}
