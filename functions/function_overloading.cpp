#include <iostream>
using namespace std;

// function overloading
int sum(int a, int b);
float sum(float a, float b);
double sum(double a, double b, double c);

int main()
{
    cout << sum(4, 5) << endl;
    cout << sum(4.5f, 5.5f) << endl;
    cout << sum(5.4, 5.6, 5.5) << endl;
    return 0;
}

int sum(int a, int b) { return a + b; }
float sum(float a, float b) { return a + b; }
double sum(double a, double b, double c) { return a + b + c; }
