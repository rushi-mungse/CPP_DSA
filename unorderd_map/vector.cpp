#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int> > vec{{3, 5}, {8, 9}, {2, 4}};
    sort(vec.begin(), vec.end(), decSort);
}