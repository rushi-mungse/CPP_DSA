#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 28; i++)
    {
        if (i % 3 == 0)
            continue; // skip the current iterator
        cout << i << " ";
    }

    cout << endl;

    for (int j = 0; j < 15; j++)
    {
        if (j == 12)
            break; // terminate the loop
        cout << j << " ";
    }

    return 0;
}