#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // assingn the 5 from front at 3 times
    v.assign(3, 5);
    // iterator of vector
    vector<int>::iterator itr = v.begin();
    // travesal of vector
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i);
    // erase element in vector
    cout << "Erase frist element in vector v : " << endl;
    v.erase(v.begin());
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i);
    cout << endl;

    // push the element at last position
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i);
    cout << endl;

    // pop the last element at the last pos
    // v.pop_back();
    cout << "size of vector is :  " << v.size() << endl;
    cout << "Max size of vector is :  " << v.max_size() << endl;
    cout << "capacity of vector is :  " << v.capacity() << endl;
    cout << "vector is empty or not :  " << v.empty() << endl;
    cout << "Vector begin method :  " << *v.begin() << endl;
    cout << "Vector end method :  " << *v.end() << endl;
    cout << "Vector cbegin method : " << *v.cbegin() << endl;
    cout << *v.rbegin() << endl;
    v.insert(v.begin(), 4);
    cout << *v.begin() << endl;
    cout << v.back() << endl;
    cout << v.front() << endl;
    // v.clear();
    // cout << v.empty() << endl;
    int *itr1 = v.data();
    cout << *itr1 << endl;
    return 0;
}
