// Ceiling number
#include <iostream>
using namespace std;

int ceilingNum(int array[], int sizeOfArray, int target)
{
    int start = 0;
    int end = sizeOfArray - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array[mid] == target)
            return mid;
        else if (array[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    // start = end + 1;
    return start;
}

int main()
{
    int array[] = {1, 2, 3, 5, 7, 9, 11};
    int ans = ceilingNum(array, 7, 4);
    cout << array[ans] << endl;
    return 0;
}