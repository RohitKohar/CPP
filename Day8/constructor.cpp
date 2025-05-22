/*
- special member function
- no return type
- called automatically when object is created
- constructor name = class name
- constructor inside a constructor can be used but only one.
*/

#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    int id1;
    int id2;

public:
    Employee(int id) : Employee() // the employee() is also a constructor it means that constructor is called inside a constructor.
    {
        this->id = id;
        cout << "This is a single argument constructor." << endl;
    }

    Employee()
    {
        cout << "I am default constructor." << endl;
    }

    int getId()
    {
        return id;
    }
};
int main()
{
    Employee emp(1); // 1 argument is passed because the constructor is receiving one signature(argument)
    cout << emp.getId() << endl;
    return 0;
}