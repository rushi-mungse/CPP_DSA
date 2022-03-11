#include <iostream>
using namespace std;

int floorNum(int arr[], int sizeOfArr, int target)
{
    int start = 0, end = sizeOfArr - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return end;
}

int main()
{
    int arr[] = {1, 6, 7, 9, 12, 23};
    int ans = floorNum(arr, 6, 10);
    cout << ans << endl;
    return 0;
}