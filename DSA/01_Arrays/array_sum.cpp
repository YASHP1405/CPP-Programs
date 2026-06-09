#include<iostream>
using namespace std;

class SumprodofArray{
public:

    int sumofarray(int a[5]){
        int sum = 0;
        for(int i=0;i<5;i++){
            sum += a[i];
        }
        return sum;
    }

    int productofarray(int a[5]){
        int product = 1;
        for(int i=0;i<5;i++){
            product *= a[i];
        }
        return product;
    }
};

int main(){

    SumprodofArray obj;

    int arr[5] = {1,2,3,4,5};

    cout<<"Sum = "<<obj.sumofarray(arr)<<endl;
    cout<<"Product = "<<obj.productofarray(arr)<<endl;

    return 0;
}