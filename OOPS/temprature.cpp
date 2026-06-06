// Convert Celsius to Fahrenheit and vice versa.
#include <iostream>
using namespace std;
void celsiusToFahrenheit(double celsius) {
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;
}
void fahrenheitToCelsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;
}
int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    celsiusToFahrenheit(celsius);
    
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    fahrenheitToCelsius(fahrenheit);
    
    return 0;
}