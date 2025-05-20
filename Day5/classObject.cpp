/*
class is same as structure if they are same then a question arise here that if there are structure then
why the concept of class and object came into practice the reason behind it is data security. It means that
the class provides data hiding and security properties using the access specifiers.
*/

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int rollNo;
    string name;

public:
    void setRollNO(int r)
    {
        rollNo = r;
    }
    void setName(string n)
    {
        name = n;
    }

    int getRollNo()
    {
        return rollNo;
    }

    string getName()
    {
        return name;
    }
};
int main()
{
    Student st;
    st.setName("Ram");
    st.setRollNO(10);
    cout << "The roll no is:" << st.getRollNo() << endl
         << "Name is: " << st.getName() << endl;
    return 0;
}