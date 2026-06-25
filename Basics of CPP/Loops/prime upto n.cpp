// Print all Prime Numbers between a given range [A, B]. 
#   include <iostream>
using namespace std;

void printPrimeNumbers(int A, int B) {
    for (int num = A; num <= B; num++) {
        if (num < 2) continue; // Skip numbers less than 2
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }
}

int main() {
    int A, B;
    cout << "Enter the range [A, B]: ";
    cin >> A >> B;
    cout << "Prime numbers between " << A << " and " << B << " are: ";
    printPrimeNumbers(A, B);
    return 0;
}