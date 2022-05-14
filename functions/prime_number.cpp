#include <iostream>
using namespace std;

bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;
    return true;
}

int findOutPrimes(int fromNumber, int toNumber)
{
    int count = 0;
    for (int i = fromNumber; i <= toNumber; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            count++;
            cout << i << " ";
        }
    }
    cout << endl;
    return count;
}

int main()
{
    int allPrimes = findOutPrimes(3, 10);
    cout << allPrimes << endl;
    return 0;
}