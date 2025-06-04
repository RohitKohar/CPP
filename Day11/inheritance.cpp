#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    int id;
    string name;
    string address;
    Person(string name, string address)
    {
        cout << "Name is:" << name << endl;
        cout << "Address is:" << address << endl;
    }
};

class Student : public Person
{
public:
    Student(int id, string name, string address) : Person(name, address)
    {
        this->id = id;
        this->name = name;
        this->address = address;
    }
};

int main()
{
    Student st(1, "Rohit", "Rupandehi");
    return 0;
}