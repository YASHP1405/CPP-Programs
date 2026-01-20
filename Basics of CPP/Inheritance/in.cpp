#include <iostream>
using namespace std;

// Class OUTSIDE main
class A {
public:
    void display() {
        cout << "I am in A" << endl;
    }
};

int main() {
    A obj;          // object created
    obj.display();  // function call
    return 0;
}
