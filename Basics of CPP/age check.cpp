/* 5. Write a program to check whether a person is:
        Child (age < 13)
        Teenager (13–19)
        Adult (20–59)
        Senior Citizen (60+)
*/

#include<iostream>
using namespace std;
int check();
int main(){
    check();
    return 0;
}
int check(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<13){
        cout<<"child"<<endl;
    }
    else if(age >= 13 && age <=19){
        cout << "teenager"<<endl;
    }
    else if(age >=20 && age <=59){
        cout<<"adult"<<endl;
    }
    else{
        cout<<"senior citizen"<<endl;
    }
    return 0;
}