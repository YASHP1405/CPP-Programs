//  Write a program to read and print elements of a 1D array.
/*
Find the sum and average of elements in an array.

Find the maximum and minimum element in an array.

Count the number of even and odd elements in an array.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];   // array declaration (max size 100)

    cout << "Enter number of elements: ";
    cin >> n;

    // Reading elements
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Printing elements
    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}





