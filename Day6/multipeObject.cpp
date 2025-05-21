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
    Employee emp,emp1;
    emp.setEmployeeId(10);
    emp1.setEmployeeId(12);
    cout << "The employee id is: " << emp.getEmployeeId()<<endl;
    cout << "The employee id is: " << emp1.getEmployeeId();
    return 0;
}