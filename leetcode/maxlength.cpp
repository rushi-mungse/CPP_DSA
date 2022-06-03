#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        vector<int> flag(26, 0);
        bool maxFlag = true;
        int firstMax = INT_MIN, secondMax = INT_MIN;

        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].size(); j++)
            {
                if (flag['a' - words[i][j]] == 0)
                {
                    flag['a' - words[i][j]] = 1;
                }
                else
                {
                    maxFlag = false;
                    break;
                }
            }

            if (maxFlag)
            {
                if (firstMax < words[i].size())
                {
                    secondMax = firstMax;
                    firstMax = words[i].size();
                }
            }
        }

        if (secondMax == INT_MIN)
            return 0;
        return firstMax * secondMax;
    }
};

int main()
{
    vector<string> words;
    words.push_back("a");
    words.push_back("rt");
    words.push_back("weq");
    Solution s;
    int ans = s.maxProduct(words);
    cout << ans;

    return 0;
}
