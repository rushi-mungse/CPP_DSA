// To check if two numbers are equal without using arithmetic operators or comparison operators.

#include <iostream>
using namespace std;

bool checkNumEqual(int n1, int n2)
{
    if ((n1 ^ n2) == 0)
        return true;
    return false;
}

int main()
{
    int num1 = 100, num2 = 100;
    bool isEqual = checkNumEqual(num1, num2);

    if (isEqual)
        cout << "Both numbers are equals " << endl;
    else
        cout << "Both numbers are not equals " << endl;

    return 0;
}