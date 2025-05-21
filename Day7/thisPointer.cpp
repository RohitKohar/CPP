#include<iostream>
using namespace std;
class student{
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
    student obj,obj1;
    obj.setId(19);
    cout << "The id is: " << obj.getId();
    return 0;
}