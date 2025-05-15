// short,int, long , long long , float, double
/*
short
signed number: (signed bit) _ _ _ _ _ _ _    _ _ _ _ _ _ _ _ _  range = 2^15 to 2^15-1
Unsigned number: _ _ _ _ _ _ _ _    _ _ _ _ _ _ _ _ _           range = 2^16 to 2^16-1
*/

// the float stores long range than the int because in one bit of float two places can be made.
#include <iostream>
using namespace std;

int main() {
    int integerVar = 10;
    float floatVar = 3.14f;
    double doubleVar = 3.14159265359;
    char charVar = 'A';
    bool boolVar = true;

    cout << "Integer: " << integerVar << endl;
    cout << "Float: " << floatVar << endl;
    cout << "Double: " << doubleVar << endl;
    cout << "Character: " << charVar << endl;
    cout << "Boolean: " << boolVar << endl;

    cout << "\nSize of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

    return 0;
}
