// Write a program to take name, address as a character array, age
#include <iostream>
using namespace std;

class Student {
public:
    char name[100];
    char address[200];
    int age;

    void input() {
        cout << "Enter name: ";
        cin.getline(name, 100);

        cout << "Enter address: ";
        cin.getline(address, 200);

        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "\nYour Details are:\n";
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;   // object of class Student

    s1.input();    // function call using object
    s1.display();

    return 0;
}
