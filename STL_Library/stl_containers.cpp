#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <forward_list>

using namespace std;

int main()
{
    vector<int> vec;
    list<int> list;
    array<int, 8> arr;
    deque<int> deque;
    forward_list<int> flist;

    vec.push_back(4);
    list.push_back(8);
    arr.fill(4);
    flist.push_front(9);
    deque.push_back(8);

    return 0;
}