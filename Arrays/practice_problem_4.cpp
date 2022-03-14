// peak index of a mountain array -- bitonic array

#include <iostream>
using namespace std;

int mountainArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid + 1])
            end = mid;
        else
            start = mid + 1;
    }
    return start;
}

int main()
{

    int arr[] = {1, 3, 5, 8, 9, 5, 6};
    int ans = mountainArr(arr, 7);
    cout << arr[ans] << endl;
    return 0;
}