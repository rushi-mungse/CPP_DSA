#include <iostream>
using namespace std;

// time complexity O(log(n))
int binarySearch(int array[], int arraySize, int target)
{
    int start = 0;
    int end = arraySize - 1;
    while (start <= end)
    {
        int mid = start - (start - end) / 2; // (start + end )/2
        if (array[mid] == target)
            return mid;
        else if (array[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int arraySize = 5;
    int arrayOne[arraySize];

    for (int i = 0; i < arraySize; i++)
        cin >> arrayOne[i];

    for (int i = 0; i < arraySize; i++)
        cout << arrayOne[i] << " ";

    cout << endl;

    int ans = binarySearch(arrayOne, arraySize, 5);
    cout << ans << endl;

    return 0;
}

// Array should be sorted
// 1.find the middle el
// 2.taget > mid ==> search in the right else search in left
// 3.if mid==target --> ans
// order agnostic binary search ... don't known about array is accending or deccending order