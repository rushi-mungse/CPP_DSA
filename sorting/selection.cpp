#include <iostream>
using namespace std;

void swap(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

void selection(int arr[], int size)
{
    int min_idx;
    for (int i = 0; i < size - 1; i++)
    {
        min_idx = i;

        for (int j = i + 1; j < size; j++)
            if (arr[j] > arr[min_idx])
                min_idx = j;

        swap(&arr[i], &arr[min_idx]);
    }
}

int main()
{
    int arr[5] = {0, 9, -1, 80, 89};
    selection(arr, 5);

    for (int a = 0; a < 5; a++)
        cout << arr[a] << " ";

    return 0;
}