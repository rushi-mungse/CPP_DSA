#include <iostream>
#include <vector>
using namespace std;

int fibo(int n)
{
    if (n < 2)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n = 8;
    int ans = fibo(n);
    cout
        << ans << endl;
    return 0;
}