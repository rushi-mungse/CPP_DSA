#include <iostream>
using namespace std;

int main()
{
    int exp;
    cout << "Enter the expression value and its should be 1 to 9 : ";
    cin >> exp;
    cout << endl;

    switch (exp)
    {
    case 1:
        cout << "This is the 1 " << endl;
        break;
    case 2:
        cout << "This is the 2 " << endl;
        break;
    case 3:
        cout << "This is the 3 " << endl;
        break;
    case 4:
        cout << "This is the 4 " << endl;
        break;
    default:
        cout << "This is default case " << endl;
    }
    return 0;
}
