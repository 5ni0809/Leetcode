#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n = nums.size();
        for (int a = 0; a < n - 3; a++)
        {
            for (int b = a + 1; b < n - 2; b++)
            {
                for (int c = b + 1; c < n - 1; c++)
                {
                    for (int d = c + 1; d < n; d++)
                    {
                        if ((long long)nums[a] + (long long)nums[b] + (long long)nums[c] + (long long)nums[d] == target)
                            s.insert({nums[a], nums[b], nums[c], nums[d]});
                    }
                }
            }
        }
        for (auto t : s)
            ans.push_back(t);
        return ans;
    }
    vector<vector<int>> fourSumx(vector<int> &nums, int target)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j + 1, high = n - 1;
                while (low < high)
                {
                    if (nums[low] + nums[high] < newTarget)
                    {
                        low++;
                    }
                    else if (nums[low] + nums[high] > newTarget)
                    {
                        high--;
                    }
                    else
                    {
                        set.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                    }
                }
            }
        }
        for (auto it : set)
        {
            output.push_back(it);
        }
        return output;
    }
};
int main(void)
{
    vector<int> n1 = {1, 0, -1, 0, -2, 2}, n2 = {2, 2, 2, 2, 2};
    int t1 = 0, t2 = 8;
    Solution s;
    s.fourSum(n1, t1);
    s.fourSum(n2, t2);
}