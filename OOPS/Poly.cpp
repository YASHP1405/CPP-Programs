#include<iostream>
using namespace std;

class father {
public:
    void show(int a, int b) {
        cout << "Father class sum: " << a + b << endl;
    }
};

class mother  {
public:
    void show(int a, int b) {
        cout << "Mother class product: " << a * b << endl;
    }
};

class child : public mother, public father {
public:
    void show(int a, int b) {
        cout << "Child class difference: " << a - b << endl;
    }
}; 

int main() {
    child c;
    father* f = &c;
    mother* m = &c;

    f.show();
    m.show();

    return 0;
}
