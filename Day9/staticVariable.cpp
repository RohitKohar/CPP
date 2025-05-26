#include <iostream>
#include<string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    static string collegeName;
    void set
};

string Student::collegeName = "Radiant";

int main() {
 Student s1;
 Student s2;
 Student s3;
 s1.rollNo = 1;
 cout << s1.rollNo << endl;
 cout << s1.collegeName<<endl;
 cout << s2.collegeName;
 return 0;
}