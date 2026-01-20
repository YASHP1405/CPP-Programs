//Find the sum and average of elements in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int sum = 0;
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];   // adding elements
    }

    average = (float)sum / n;

    cout << "Sum of elements = " << sum << endl;
    cout << "Average of elements = " << average << endl;

    return 0;
}
