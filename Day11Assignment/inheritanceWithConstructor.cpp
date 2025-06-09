#include <iostream>
using namespace std;

class Parent {
public:
    Parent(){
        cout << "This is default constructor of Parent." << endl;
    }
    Parent(int x){
        cout << "This is one argument constructor of Parent." << endl;
    }
    Parent(int x, int y)
    {
        cout << "This is two argument constructor of Parent." << endl;
    }
};


class Child:public Parent{
public:
    Child()
    {
        cout << "This is default constructor of child." << endl;
    }
    Child(int x):Parent(x){
        cout << "This is one argument parameterized constructor." << endl;
    }
    Child(int x, int y)
    {
        cout << "This is two argument parameterized constructor." << endl;
    }
};


int main() {
    Child obj;
    Child ob(10);
    return 0;
}