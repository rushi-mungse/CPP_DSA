// Find the first and last position of element in sorted array

#include <iostream>
using namespace std;

int search(int arr[], int size, bool findingStartEl, int target)
{
    int start = 0;
    int ans = -1;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > target)
            end = mid - 1;
        else if (arr[mid] < target)
            start = mid + 1;
        else
        {
            ans = mid;
            if (findingStartEl)
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    return ans;
}

void findAns(int arr[], int size, int target)
{
    int start = search(arr, size, true, target);
    int end = -1;
    if (start != -1)
        end = search(arr, size, false, target);
    cout << "ans is :" << start << " " << end << endl;
}

int main()
{
    int arr[] = {2, 7, 7, 7, 7, 8, 8, 9, 20};
    findAns(arr, 9, 7);
    return 0;
}