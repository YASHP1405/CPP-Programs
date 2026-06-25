// Check if a number is a Prime Number. 
# include <iostream>
using namespace std;

int primenumber(int n) {
    if (n <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (primenumber(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}