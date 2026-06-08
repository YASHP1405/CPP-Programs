//  Calculate the gross salary of an employee given basic salary and allowances  (HRA%, DA%).
#include <iostream>
using namespace std;
void input (float &basic_salary, float &hra_percent, float &da_percent) {
    cout << "Enter basic salary: ";
    cin >> basic_salary;
    cout << "Enter HRA percentage: ";
    cin >> hra_percent;
    cout << "Enter DA percentage: ";
    cin >> da_percent;
}
float calculate_gross_salary(float basic_salary, float hra_percent, float da_percent) {
    float hra = (hra_percent / 100) * basic_salary;
    float da = (da_percent / 100) * basic_salary;
    return basic_salary + hra + da;
}
int main() {
    float basic_salary, hra_percent, da_percent;
    input(basic_salary, hra_percent, da_percent);
    float gross_salary = calculate_gross_salary(basic_salary, hra_percent, da_percent);
    cout << "Gross Salary: " << gross_salary << endl;
    return 0;
} 