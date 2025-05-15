// A variable in C++ is a named storage location in the computer's memory that holds a value. It is used to store data that can be accessed and modified during program execution

#include <iostream>
using namespace std;

int main() {
    // Variable declaration and initialization
    int age = 22;               // Integer variable
    float height = 5.9f;        // Float variable
    double weight = 70.5;       // Double variable
    char grade = 'A';           // Character variable
    bool isPassed = true;       // Boolean variable

    // Displaying the values of the variables
    cout << "Student Details:" << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << (isPassed ? "Yes" : "No") << endl;

    // Demonstrate modifying a variable
    age = age + 1;
    cout << "\nAfter a year, age will be: " << age << " years" << endl;

    return 0;
}
