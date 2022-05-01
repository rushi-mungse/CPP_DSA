#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> result;
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i;
            while (j < nums.size() && nums[j] == nums[j + 1] - 1)
                j++;

            if (j > i)
            {
                string range = to_string(nums[i]) + "->" + to_string(nums[j]);
                result.push_back(range);
            }
            else
            {
                string range = to_string(nums[i]);
                result.push_back(range);
            }
            i = j;
        }
        return result;
    }
};

int main()
{
    vector<int> nums;
    vector<string> result;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(9);
    Solution s;
    result = s.summaryRanges(nums);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}