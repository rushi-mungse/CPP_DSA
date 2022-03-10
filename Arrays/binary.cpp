#include <iostream>
using namespace std;

const int MAX = 100;
void pureBinarySearch(int matrix[][MAX], int cStart, int cEnd, int row, int target)
{
    while (cStart <= cEnd)
    {
        int mid = cStart + (cEnd - cStart) / 2;
        if (matrix[row][mid] == target)
        {
            cout << "row : " << row << " col : " << mid << endl;
            return;
        }
        else if (matrix[row][mid] > target)
            cEnd = mid - 1;

        else
            cStart = mid + 1;
    }
    cout << "Element not found." << endl;
}

void search(int matrix[][MAX], int rows, int cols, int target)
{
    if (rows == 1)
        pureBinarySearch(matrix, 0, cols - 1, 0, target);

    int rStart = 0;
    int rEnd = rows - 1;
    int cMid = cols / 2;

    while (rStart < (rEnd - 1))
    {
        int rMid = rStart + (rEnd - rStart) / 2;
        if (matrix[rMid][cMid] == target)
        {
            cout << "row : " << rMid << " col : " << cMid << endl;
            return;
        }
        else if (matrix[rMid][cMid] > target)
            rEnd = rMid;
        else
            rStart = rMid;
    }
    // checking target in mid of the cols
    if (matrix[rStart][cMid] == target)
    {
        cout << "row : " << rStart << " col : " << cMid << endl;
        return;
    }
    else if (matrix[rStart + 1][cMid] == target)
    {
        cout << rStart + 1 << cMid << endl;
        return;
    }
    else if (matrix[rStart][cMid - 1] >= target)
        pureBinarySearch(matrix, 0, cMid - 1, rStart, target);
    else if (matrix[rStart][cMid + 1] <= target && matrix[rStart][cols - 1] >= target)
        pureBinarySearch(matrix, cMid + 1, cols - 1, rStart, target);
    else if (matrix[rStart + 1][cMid - 1] >= target)
        pureBinarySearch(matrix, 0, cMid - 1, rStart + 1, target);
    else
        pureBinarySearch(matrix, cMid + 1, cols - 1, rStart + 1, target);
    return;
}

int main()
{
    int matrix[][MAX] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    search(matrix, 4, 4, 8);
    return 0;
}