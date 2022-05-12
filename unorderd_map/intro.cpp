#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> ump;
    for (int = 1; i < 4; i++)
        ump[i]++;

    for (auto &[k, v] : ump)
        cout << k << " . " << v << endl;

    return 0;
}