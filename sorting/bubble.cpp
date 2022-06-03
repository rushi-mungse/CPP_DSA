#include <iostream>
using namespace std;

void bubble(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {4, 5, 67, 90, -1};
    bubble(arr, 5);
    for (int j = 0; j < 5; j++)
        cout << arr[j] << " ";

    return 0;
}