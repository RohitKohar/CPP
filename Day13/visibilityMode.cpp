
// public visibility mode in inheritance
#include <iostream>
using namespace std;

class Parent
{
private:
    int priVar = 1;

public:
    int pubVar = 2;

protected:
    int protVar = 3;
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "Public Variable: " << pubVar << endl;     // public variable is public
        cout << "Protected Variable: " << protVar << endl; // protected variable is protected
    }
};

int main()
{
    Child c; // object of child class
    c.show();
    cout << c.pubVar << endl; // publicly available
    return 0;
}




// protected visibility mode in inheritance

#include <iostream>
using namespace std;

class Parent
{
private:
    int priVar = 1;

public:
    int pubVar = 2;

protected:
    int protVar = 3;
};

class Child : protected Parent
{
public:
    void show()
    {
        cout << "Public Variable: " << pubVar << endl;     // public variable becomes protected
        cout << "Protected Variable: " << protVar << endl; // protected variable is protected
    }
};

int main()
{
    Child c; // object of child class
    c.show();
    cout << c.pubVar << endl; // Error cannot access because the pubVar becomes protected 
    return 0;
}




// private visibility mode

#include <iostream>
using namespace std;

class Parent
{
private:
    int priVar = 1;

public:
    int pubVar = 2;

protected:
    int protVar = 3;
};

class Child : private Parent  // if you don't write anything then by default the visibility mode will be private.
{
public:
    void show()
    {
        cout << "Public Variable: " << pubVar << endl;     // public variable becomes private
        cout << "Protected Variable: " << protVar << endl; // protected variable is private
    }
};

int main()
{
    Child c; // object of child class
    c.show();
    cout << c.pubVar << endl; // Error cannot access because the pubVar becomes private
    return 0;
}