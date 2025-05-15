// This is simple program of c++.    || 1. this is documentation section
#include<iostream>          // 2. header file or link section
#define PI 3.14             

void hello();               // 3. definition section

int a=20;                   // 4. global declaration section
using namespace std;

int main()                  // 5. main function
{
    hello();                // function calling
    cout<<"The value of a is: "+a<<endl;                //   printing value of global variable
    return 0;
}

void hello()        // 6. function definition
{
    cout<<"Hello world"<<endl;
}