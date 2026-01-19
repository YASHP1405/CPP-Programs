#include<iostream>
using namespace std;
//class
int main(){
    class Family{
        public:
        int members;
        int girls;
        int boys;
        int name;
        int age;
        Family(int m,int g,int b){
            members =m;
            girls = g;
            boys = b;

        }
        Family(int n, int a){
            name = n;
            age = a;
        }
    void display(){
        cout<<members;
        cout<<girls;
        cout<<boys;
        cout<<name;
        cout<<age;
        }
    };
    //object
    Family Yash(4,2,2);
    Family Yash( "Yash", 18);
    Yash.display();
}