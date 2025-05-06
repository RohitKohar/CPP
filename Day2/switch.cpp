/*

switch (expression) {
    case constant1:
        code to execute if expression == constant1
        break;

    case constant2:
        code to execute if expression == constant2
        break;

    ...

    default:
        code to execute if no case matches
}

break is used after each case because if the break is not used then all the following case will also print
so avoid that we use break statements.

case accept only constant value no any expression.
if else ladder is a little complex so switch is used instead of that.

*/



// day_selection.cpp
#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter a number (1 to 7) to select a day: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return 0;
}


