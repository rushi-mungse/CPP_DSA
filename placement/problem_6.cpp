// To Swap the values of two variables without using any extra variable.

#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    a = b - a;
    b = b - a;
    a = b + a;
    cout << a << "    .    " << b << endl;
}

int main()
{
    int a = 8, b = 5;
    cout << a << "    .    " << b << endl;
    Swap(a, b);
    return 0;
}