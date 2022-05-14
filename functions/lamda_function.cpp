#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void functionx(int x)
{
    cout << x << endl;
    return;
}

int main()
{
    vector<int> v(3, 4);
    vector<int> vec(5, 3);
    for_each(v.begin(), v.end(), functionx);
    return 0;
}