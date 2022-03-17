// Program for array rotation

#include <iostream>
using namespace std;

void arrRotation(int arr[], int size, int position)
{
    int temp[position];
    for (int i = 0; i < position; i++)
        temp[i] = arr[i];

    for (int i = position; i < size; i++)
        arr[i - position] = arr[i];

    for (int i = size - position - 1; i < size; i++)
        arr[i] = temp[i - size + position + 1];
}

int main()
{
    int arr[5] = {1, 4, 5, 6, 3};
    arrRotation(arr, 5, 2);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}