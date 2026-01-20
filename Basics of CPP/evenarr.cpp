// Count the number of even and odd elements in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int evenCount = 0, oddCount = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of even elements = " << evenCount << endl;
    cout << "Number of odd elements = " << oddCount << endl;

    return 0;
}
