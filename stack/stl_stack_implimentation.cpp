// push()
// pop()
// size()
// top()
// empty()

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(45);
    s.push(35);
    s.push(35);
    s.push(35);
    s.push(35);
    s.push(35);
    cout << s.empty() << endl;
    cout << s.size() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}