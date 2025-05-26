#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;

    // Constructor
    Student(int n)
    {
        rollNo = n;
        cout << "Constructor called. Roll No: " << rollNo << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student obj(10); // Constructor is called here
    // Destructor will be called automatically when obj goes out of scope
    return 0;
}
