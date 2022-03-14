/*
1 2 3 4
1 2 3 4
1 2 3 4
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << (i * n) + (j + 1) << " "; // formula replace
        cout << endl;
    }
    return 0;
}

// n - j + 1  --> using this formula for

/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/