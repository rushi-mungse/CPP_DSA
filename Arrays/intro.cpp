#include <iostream>
using namespace std;

const int MAX = 100;
// travers an array
void traversArr(int arr[MAX], int n)
{
    cout << "Enter the element in an array : " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Elements in an array are : " << endl;
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";

    cout << endl;
}

void insertElInArr(int arr[MAX], int sizeOfArr, int position, int insertEl)
{
    for (int i = sizeOfArr - 1; i >= position; i--)
        arr[i + 1] = arr[i];
    arr[position] = insertEl;
}

int main()
{

    return 0;
}