#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1;
        stack<char> s2;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
                s1.pop();
            else
                s1.push(s[i]);
        }
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == '#')
                s2.pop();
            else
                s2.push(t[i]);
        }
        if (s1.size() == s2.size())
        {
            while (!s1.empty() && !s2.empty())
            {
                if (s1.top() != s2.top())
                    return false;
                s1.pop();
                s2.pop();
            }
        }
        else
            return false;

        return true;
    }
};

int main()
{
    string s = "ab#d";
    string t = "ad";
    Solution s1;
    bool ans = s1.backspaceCompare(s, t);
    cout << ans;
    return 0;
}