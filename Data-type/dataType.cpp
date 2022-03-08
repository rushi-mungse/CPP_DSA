#include <iostream>
using namespace std;

int main()
{
    int intNum = 45;
    cout << "Size of integer data type : " << sizeof(intNum) << endl;
    char charLetter = 'c';
    cout << "Size of character data type : " << sizeof(charLetter) << endl;
    float floatNum = 4544.545f;
    cout << "Size of float data type : " << sizeof(floatNum) << endl;
    double doubleNum = 4534.45345345;
    cout << "Size of double data type : " << sizeof(doubleNum) << endl;
    bool isLogged = true;
    cout << "Size of boolean data type : " << sizeof(isLogged) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    long myLong = 53545353453453;
    cout << "Size of long long data type : " << sizeof(myLong) << endl;
    return 0;
}
// Data type in cpp
/*
1.Primary data type
    1.1.integer
    1.2.character
    1.3.float
    1.4.double
    1.5.void
    1.6.wide char
    1.7.boolean
2.Derived data type
    2.1.Functions
    2.2.Array
    2.3.Pointer
    2.4.References
3.User defined data type
    3.1.Class
    3.2.Object
    3.3.Sturcture
    3.4.Enum
    3.5.Union
    3.6.Typedef
*/