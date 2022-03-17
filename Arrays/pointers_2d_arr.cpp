#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p;
    p = arr[1];

    for (int i = 0; i <= 2; i++)
        cout << *(p + i) << " ";

    cout << *(*(arr + 1) + 1) << endl;

    // arr[1][1]
    // arr[i][j]
    // *(*(arr[i]+j))

    return 0;
}