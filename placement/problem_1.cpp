// Checking if a given year is leap year or not

#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    if (year % 4 == 0)
        return true;
    else
        return false;
}

int main()
{
    int year;
    cout << "Enter the year" << endl;
    cin >> year;
    bool ans = isLeapYear(year);
    cout << "Given year is leap or not : " << ans << endl;
    return 0;
}