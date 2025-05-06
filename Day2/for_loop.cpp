/*

for(expression;expression;expression)
{
    statements;
}

*/

#include <iostream>
using namespace std;

int main()
{
    for (;;) // this will print the hello world infinitely.
    {
        cout << "Hello world" << endl;
    }

    for (cout << "hello world"; 0;) // the first expression is executed only one time.
    {
    }

    for (;1;) // if middle expression is converted into boolean by system and if the bool is false if terminates and if bool is true then it will print infinitely
    {
        cout << "Hello world" << endl;
    }
    return 0;
}
