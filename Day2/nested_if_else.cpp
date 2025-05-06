/*

if (condition1) {
    executes if condition1 is true
    if (condition2) {
        Executes if both condition1 and condition2 are true
    } else {
        Executes if condition1 is true and condition2 is false
    }
} else {
    Executes if condition1 is false
}

*/
 

// nested_if_else.cpp
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;

        if (age >= 60) {
            cout << "You are also a senior citizen." << endl;
        } else {
            cout << "You are not a senior citizen." << endl;
        }
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}

