// Sinking sort or Exchange sort or Bubble sort

#include <iostream>
using namespace std;

// TC O(n*n) space complexity O(1)

void bubbleSort(int arr[], int size)
{
    while (size >= 1)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        size--;
    }
}

int main()
{
    int size = 5;
    int arr[] = {3, 6, 2, 4, 35};
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}