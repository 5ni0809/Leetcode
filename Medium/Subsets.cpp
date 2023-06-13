#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sub(int i, vector<int> &nums, vector<int> &v, vector<vector<int>> &ans)
    {
        if (i >= nums.size())
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        sub(i + 1, nums, v, ans);
        v.pop_back();
        sub(i + 1, nums, v, ans);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> v;
        sub(0, nums, v, ans);
        return ans;
    }
};
int main(void)
{
    vector<int> n1 = {1, 2, 3}, n2 = {0};
    Solution s;
    s.subsets(n1);
    s.subsets(n2);
}