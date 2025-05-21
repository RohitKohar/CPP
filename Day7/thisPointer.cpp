#include <iostream>
using namespace std;
class student
{
    int id;

public:
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
};
int main()
{
    student obj, obj1;
    obj.setId(19);
    obj1.setId(20);
    cout << "The id is: " << obj1.getId() << endl;
    cout << "The id is: " << obj.getId();
    return 0;
}