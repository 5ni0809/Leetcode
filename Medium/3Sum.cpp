#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target)
                {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (sum < target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        for (auto triplets : s)
            ans.push_back(triplets);
        return ans;
    }
};
int main(void)
{
    vector<int> n1 = {-1, 0, 1, 2, -1, -4};
    vector<int> n2 = {0, 1, 1};
    vector<int> n3 = {0, 0, 0};
    Solution s;
    s.threeSum(n1);
    s.threeSum(n2);
    s.threeSum(n3);
}