#include <iostream>
using namespace std;
const int MAX = 100;
void binarySearch(int array[][MAX], int cStart, int cEnd, int row, int target)
{
    cout << cStart << cEnd << row << endl;
    while (cStart <= cEnd)
    {
        int mid = cStart + (cEnd - cStart) / 2;
        if (array[row][mid] == target)
        {
            cout << "row : " << row << " col : " << mid << endl;
            return;
        }
        else if (array[row][mid] > target)
            cEnd = mid - 1;
        else
            cStart = mid + 1;

        cout << "Element no found";
    }
}

void search(int matrix[][MAX], int rows, int cols, int target)
{
    if (rows == 1)
        binarySearch(matrix, 0, cols - 1, 0, target);
    int rStart = 0;
    int rEnd = rows - 1;
    int cMid = cols / 2;

    while (rStart < (rEnd - 1))
    {
        int mid = rStart + (rEnd - rStart) / 2;
        if (matrix[mid][cMid] == target)
        {
            cout << "row : " << mid << " col : " << cMid << endl;
        }
        else if (matrix[mid][cMid] > target)
            rEnd = mid;
        else
            rStart = mid;
        // now we have 2 rows
        //  check whether the target is in the col of 2 row
        if (matrix[rStart][cMid] == target)
        {
            cout << rStart << cMid << endl;
            return;
        }
        else if (matrix[rStart + 1][cMid] == target)
        {
            cout << rStart + 1 << cMid << endl;
            return;
        }
        else if (matrix[rStart][cMid - 1] >= target)
        {
            binarySearch(matrix, 0, cMid - 1, rStart, target);
        }
        else if (matrix[rStart + 1][cMid - 1] >= target)
        {
            binarySearch(matrix, 0, cMid - 1, rStart + 1, target);
        }
        else if (matrix[rStart][cMid + 1] <= target && matrix[rStart][cols - 1] >= target)
        {
            binarySearch(matrix, cMid + 1, cols - 1, rStart, target);
        }
        else
        {
            binarySearch(matrix, cMid + 1, cols - 1, rStart + 1, target);
        }
        cout << "-1 -1" << endl;
        return;
    }
}

int main()
{
    int rows = 4, cols = 4;
    int matrix[][MAX] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    search(matrix, rows, cols, 8);
    return 0;
}

// 1. el = target return
// 2. el > target  ingnore above rows
// 3. el < target ingnore below rows

// consider ramaining rows for finding the target el
// if not got target then -->
// divide the  remaining rows into 4