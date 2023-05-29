#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void algo(vector<int> &nums, int i, vector<vector<int>> &ans)
    {
        int n = nums.size();
        if (i == n - 1)
        {
            ans.push_back(nums);
            return;
        }
        for (int j = i; j < n; j++)
        {
            swap(nums[i], nums[j]);
            algo(nums, i + 1, ans);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        algo(nums, 0, ans);
        return ans;
    }
};
int main(void)
{
    vector<int> n1 = {1, 2, 3}, n2 = {0, 1}, n3 = {1};
    Solution s;
    s.permute(n1);
    s.permute(n2);
    s.permute(n3);
}