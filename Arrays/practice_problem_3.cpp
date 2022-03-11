// infinite array fingind position of el

#include <iostream>
using namespace std;
int search(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > target)
            end = mid - 1;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int start = 0;
    int end = 1;
    int target = 19;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    while (target > arr[end])
    {
        int newStart = end + 1;
        end = end + (end - start + 1);
        start = newStart;
    }
    int ans = search(arr, start, end, target);
    cout << ans << endl;
    return 0;
}