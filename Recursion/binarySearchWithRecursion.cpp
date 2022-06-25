#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;

    if (arr[mid] == target)
        return mid;
    if (arr[mid] > target)
        return binarySearch(arr, s, mid - 1, target);
    return binarySearch(arr, mid + 1, e, target);
}

int main()
{
    int arr[5] = {5, 6, 9, 18, 87};
    int index = binarySearch(arr, 0, 4, 87);
    cout << index << endl;
    return 0;
}