#include <iostream>
using namespace std;

// time complexity O(n*n) space complexity O(1)
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
}

int main()
{
    int arr[] = {3, 64, 2, 7};
    selectionSort(arr, 4);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";

    return 0;
}