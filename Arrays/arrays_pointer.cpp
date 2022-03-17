#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 4, 4};
    int num = 85;
    int *p;
    p = &num;
    cout << p << endl;
    int *q = p + 1;
    cout << q << endl;

    cout
        << arr << endl;
    cout << arr + 1 << endl;
    return 0;
}