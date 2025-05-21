#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;
    int age;
};
int main()
{
    Employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Details of Employee " << i + 1 << endl;
        cout << "Enter employee Id: ";
        cin >> emp[i].id;
        cout << "Enter employee Name: ";
        cin >> emp[i].name;
        cout << "Enter employee Salary: ";
        cin >> emp[i].salary;
        cout << "Enter employee Age: ";
        cin >> emp[i].age;
        cout << endl;
    }

    cout << "********************" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Employee Id: " << emp[i].id << endl;
        cout << "Employee Name: " << emp[i].name << endl;
        cout << "Employee Salary: " << emp[i].salary << endl;
        cout << "Employee Age: " << emp[i].age << endl;
        cout << "-----------------" << endl;
    }

    return 0;
}