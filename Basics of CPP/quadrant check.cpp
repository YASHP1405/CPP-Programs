// Determine the quadrant of a coordinate point (x, y).
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the coordinates (x, y): ";
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "The point is in the first quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point is in the second quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point is in the third quadrant." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point is in the fourth quadrant." << endl;
    } else if (x == 0 && y != 0) {
        cout << "The point is on the Y-axis." << endl;
    } else if (y == 0 && x != 0) {
        cout << "The point is on the X-axis." << endl;
    } else {
        cout << "The point is at the origin." << endl;
    }

    return 0;
}
