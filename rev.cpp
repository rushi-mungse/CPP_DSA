#include <iostream>
using namespace std;

int main()
{
    int res = 0;
    int n = 123;
    while (n != 0)
    {
        int d = n % 10;
        res = res * 10 + d;
        n = n / 10;
    }
    cout << res << endl;
    return 0;
}