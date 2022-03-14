
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter the number for cheking given num is prime or not " << endl;
    cin >> num;
    bool ans = isPrime(num);
    cout << "Given num is prime or not : " << ans << endl;
    return 0;
}