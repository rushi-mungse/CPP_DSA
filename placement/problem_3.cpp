// Program to find Maximum and minimum of two numbers without using any loop or condition.

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;
    cout << abs(-4.5) << endl;

    cout << "max = " << ((a + b) + abs(a - b)) / 2 << endl;
    cout << "min = " << ((a + b) - abs(a - b)) / 2 << endl;
    return 0;
}