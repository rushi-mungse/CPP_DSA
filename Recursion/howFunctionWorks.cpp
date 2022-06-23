#include <iostream>
using namespace std;

void printNumber4(int n)
{
    cout << n << " ";
}

void printNumber3(int n)
{
    cout << n << " ";
    printNumber4(n + 1);
}
void printNumber2(int n)
{
    cout << n << " ";
    printNumber3(n + 1);
}
void printNumber1(int n)
{
    cout << n << " ";
    printNumber2(n + 1);
}

int main()
{
    printNumber1(1);
    return 0;
}