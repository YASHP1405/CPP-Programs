/*
16. Write a program to grade a student based on marks:

      ≥ 90 → A

      ≥ 75 → B

      ≥ 60 → C

      ≥ 40 → D

      Else → Fail*/
#include <iostream>
using namespace std;

void grademarks(int marks);   

int main() {
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    grademarks(marks);   
    return 0;
}

void grademarks(int marks) {
    if (marks >= 90) {
        cout << "Grade: A";
    }
    else if (marks >= 75) {
        cout << "Grade: B";
    }
    else if (marks >= 60) {
        cout << "Grade: C";
    }
    else if (marks >= 40) {
        cout << "Grade: D";
    }
    else {
        cout << "Fail";
    }
}
