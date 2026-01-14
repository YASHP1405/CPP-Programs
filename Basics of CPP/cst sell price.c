#include <iostream>
using namespace std;

float calculateProfitOrLoss(float costPrice, float sellingPrice) {
    return sellingPrice - costPrice;
}

int main() {
    float costPrice, sellingPrice;

    cout << "Enter Cost Price and Selling Price: ";
    cin >> costPrice >> sellingPrice;

    float result = calculateProfitOrLoss(costPrice, sellingPrice);

    if (result > 0) {
        cout << "Profit: " << result << endl;
    } else if (result < 0) {
        cout << "Loss: " << -result << endl;
    } else {
        cout << "No Profit No Loss" << endl;
    }

    return 0;
}
