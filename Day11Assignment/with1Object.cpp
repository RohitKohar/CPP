#include <iostream>
using namespace std;

class Parent
{
public:
    Parent() : Parent(10)
    {
        cout << "This is default constructor of Parent." << endl;
    }
    Parent(int x) : Parent(10, 20)
    {
        cout << "This is one argument constructor of Parent." << endl;
    }
    Parent(int x, int y)
    {
        cout << "This is two argument constructor of Parent." << endl;
    }
};

class Child : public Parent
{
public:
    Child() : Parent()
    {
        cout << "This is default constructor of child." << endl;
    }
    Child(int x) : Child()
    {
        cout << "This is one argument parameterized constructor." << endl;
    }
    Child(int x, int y) : Child(x)
    {
        cout << "This is two argument parameterized constructor." << endl;
    }
};

int main()
{
    Child obj(10, 20);
    return 0;
}