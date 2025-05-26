#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    static string collegeName;
    static void showCollegeName()
    {
        cout << "College Name: " << collegeName << endl;
    }

    void setDetails(int r, string n)
    {
        rollNo = r;
        name = n;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

string Student::collegeName = "Radiant";

int main()
{
    Student s1, s2, s3;
    s1.setDetails(1, "Rohit");
    s2.setDetails(2, "Amit");

    s1.display();
    s2.display();

    s1.showCollegeName();
    return 0;
}
