#include <iostream>
using namespace std;
const int N = 6;

void reverseArray(int n, int i, int arr[])
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(n, i + 1, arr);
    return;
}

int main()
{
    int arr[N] = {3, 5, 8, 90, -1, 87};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr_size, 0, arr);

    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    return 0;
}