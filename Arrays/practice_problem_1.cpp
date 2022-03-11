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
    // edge case
    if (start == size) // start % size==0
        return 0;
    return start; // start % size
}
int main()
{
    int letters[] = {'c', 'f', 'j'};
    int ans = nextGreatestLetter(letters, 3, 'j');
    cout << ans << endl;
    return 0;
}