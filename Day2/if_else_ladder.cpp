/*

if (condition1 or expression) {
     Executes if condition1 is true
} else if (condition2) {
     Executes if condition2 is true
} else if (condition3) {
     Executes if condition3 is true
} else {
     Executes if none of the above conditions are true
}

*/

// if_else_ladder.cpp
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } else if (marks >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}


