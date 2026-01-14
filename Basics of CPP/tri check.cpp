/* 2. Write a program to determine whether a triangle is:
   Equilateral,Isosceles,Scalene */

   #include<iostream>
   using namespace std;
   int main(){
    int a,b,c;
    cout << "Enter the sides of triangle to check it ";
    cin >> a >> b >> c;
    if(a==b && b==c){
        cout << "The triangle is Equilateral";
    }
    else if(a==b || b==c || c==a){
        cout << "The triangle is Isosceles";
    }
    else{
        cout << "The triangle is Scalene";
    }
    return 0;
   }