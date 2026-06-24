#include<iostream>
using namespace std;

class Billing {
    private :
    int qyt ;
    float price, totalprice;
    double discount, payprice;

    public :
    
    void readDetails() {
        cout << "Enter the quantity of books: ";
        cin >> qyt;
        cout << "Enter the price of each book: ";
        cin >> price;
    }
    public :
    void showBill(){
        totalprice = qyt * price;
        cout << "Total price: " << totalprice << endl;
        if (qyt > 10) {
            discount = totalprice * 0.1;
            cout << "Discount: " << discount << endl;
        }
        else if (qyt > 10 && qyt <=25)
        {
            discount = totalprice * 0.15;
            cout << "Discount: " << discount << endl;
        }
        else if (qyt > 25 ){
            discount = totalprice * 0.2;
            cout << "Discount: " << discount << endl;
        }
         else {
            discount = 0;
            cout << "Discount: " << discount << endl;
        }
        payprice = totalprice - discount;
        cout << "Payable price: " << payprice << endl;
    }
} ;

int main() {
    Billing bill;
    bill.readDetails();
    bill.showBill();
    return 0;
}