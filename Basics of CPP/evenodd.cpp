/* 7. Write a program to check whether a number is even or odd. */
/*
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
 */

 #include<iostream>
 using namespace std;
 int  evenodd(int num);

 int main() {
     int num;
     cout << "Enter an integer: ";
     cin >> num;
     if(evenodd(num))
            cout << num << " is even." << endl;
        else
            cout << num << " is odd." << endl;
     return 0;
 }
    int evenodd(int num) {
        return num % 2 == 0;
    }