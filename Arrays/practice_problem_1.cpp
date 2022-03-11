// Find the smallest letter greater then target

#include <iostream>
using namespace std;

int nextGreatestLetter(int letters[], int size, char target)
{
    int start = 0;
    // int end = (sizeof(letters) / sizeof(letters[0])) - 1;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (letters[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return start;
}

int main()
{
    int letters[] = {'c', 'f', 'j'};
    int ans = nextGreatestLetter(letters, 3, 'f');
    cout << ans << endl;
    return 0;
}