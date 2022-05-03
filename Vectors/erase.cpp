#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> V;
    V.assign(3, 9);
    V.erase(V.begin() + 1);
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << endl;
    }
    return 0;
}
