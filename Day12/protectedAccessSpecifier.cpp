#include <iostream>
using  namespace std;
class Base{
private:
    int privateVariable;
public:
    int publicVariable;
protected:
    int protectedVariable;

};
class Derived: private Base {
private:
    void setProtectedVariable(int x)
    {
        protectedVariable =x;
    }
    int getProtectedVariable()
    {
        return protectedVariable;
    }
};

int main()
{
    Derived d;
    d.setProtectedVariable(10);
    cout<<"Protected Variable"<<d.getProtectedVariable();
}