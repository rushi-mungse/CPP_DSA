#include <iostream>
using namespace std;
// time complecity is O(n)
int linearSearch(int array[], int arraySize, int target)
{
    for (int j = 0; j < arraySize; j++)
        if (array[j] == target)
            return j;
    return -1;
}

int main()
{

    int arraySize = 6;
    int arrayOne[arraySize];

    for (int i = 0; i < arraySize; i++)
        cin >> arrayOne[i];

    for (int i = 0; i < arraySize; i++)
        cout << arrayOne[i] << " ";

    cout << endl;
    int ans = linearSearch(arrayOne, arraySize, 8);
    cout << ans << endl;

    return 0;
}
