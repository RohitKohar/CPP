#include <iostream>
using namespace std;
class Employee
{
private:
    int employeeId;

public:
    void setEmployeeId(int i)
    {
        employeeId = i;
    }
    int getEmployeeId()
    {
        return employeeId;
    }
};

int main()
{
    Employee emp;
    emp.setEmployeeId(10);
    cout << "The employee id is: " << emp.getEmployeeId();
    return 0;
}