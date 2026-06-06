#include <iostream>
using namespace std;

int main() {
    int *p;

    // Dynamic memory allocation
    p = new int;

    cout << "Enter a number: ";
    cin >> *p;

    cout << "Value stored in dynamic memory: " << *p << endl;

    // Dynamic memory deallocation
    delete p;

    cout << "Memory deallocated successfully." << endl;

    return 0;
}
