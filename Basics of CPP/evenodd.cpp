/* 
7. Write a program to check whether a number is even or odd.

8. Write a program to check whether a person is eligible to vote (age ≥ 18).
 */

 #include<iostream>
 using namespace std;
 void evenodd(int num);

 int main() {
     int num;
     cout << "Enter an integer: ";
     cin >> num;
     evenodd(num);
     return 0;
 }

 void evenodd(int num) {
     if (num % 2 == 0)
         cout << num << " is even." << endl;
     else
         cout << num << " is odd." << endl;
 }