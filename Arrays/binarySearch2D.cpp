#include <iostream>
using namespace std;

const int MAX = 100;

void binarySearch(int array[][MAX], int r, int c, int target)
{
    int row = 0, col = c - 1;
    while (row < r && col >= 0)
    {
        if (array[row][col] == target)
        {
            cout << "row : " << row << " col :  " << col << endl;
            return;
        }
        else if (array[row][col] > target)
            col--;
        else
            row++;
    }
    cout << "row : -1 "
         << "col : -1  " << endl;
    return;
}

int main()
{
    int col = 4, row = 5;
    int twoDArray[][MAX] = {{0, 6, 8, 9, 11},
                            {20, 22, 28, 29, 31},
                            {36, 38, 50, 61, 63},
                            {64, 66, 100, 122, 128}};

    /*    for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                cin >> twoDArray[i][j];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                cout << twoDArray[i][j] << " ";
            cout << endl;
        }
    */
    binarySearch(twoDArray, row, col, 5);
    return 0;
}