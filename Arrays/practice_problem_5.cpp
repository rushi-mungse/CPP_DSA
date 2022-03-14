#include <iostream>
using namespace std;

const int MAX = 100;

void findEl(int matrix[][MAX], int rows, int cols, int target)
{
    int row = 0;
    int col = cols - 1;

    while (row > rows && col < cols)
    {
        if (matrix[row][col] == target)
        {
            cout << "row : " << row << " col : " << col << endl;
            return;
        }
        else if (matrix[row][col] > target)
            col--;
        else
            row++;
    }
    cout << "row : " << -1 << " col : " << -1 << endl;
    return;
}

int main()
{
    int cols = 4, rows = 4;
    int matrix[][MAX] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {9, 12, 14, 16}, {14, 17, 16, 49}};
    findEl(matrix, rows, cols, 14);
    return 0;
}