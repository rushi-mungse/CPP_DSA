#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declare vector
    vector<int> vec;
    // push the el in vector from back
    vec.push_back(5);
    // assign the new vector to replacing old values.
    vec.assign(5, 39);
    // remove the last el from the back
    vec.pop_back();
    // insert the new el in vector at given position
    vec.insert(vec.begin() + 3, 6);
    // stl iterator
    vector<int>::iterator it;
    // at[position] gives the el at that position
    cout << "El at position 4 : " << vec[4] << endl;
    // front el in vector
    cout << "The front el : " << vec.front() << endl;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}