#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> list1;
    list1.push_back(34);
    list1.push_back(90);
    list<int>::iterator itr = list1.begin();
    cout << *itr << endl;
    return 0;
}