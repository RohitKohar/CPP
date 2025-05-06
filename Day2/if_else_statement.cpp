/* 

if (condition) {
    // code if condition is true
} else {
    // code if condition is false
}

*/

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number: "<<endl;
    cin>>num;
    if(num>=18)
    {
        cout<<"You age is 18+.";
    }
    else{
        cout<<"Your age is less than 18.";
    }
    return 0;
}