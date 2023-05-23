#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void algo(vector<int> &candidates, int target, int start, vector<int> &v, vector<vector<int>> &ans)
    {
        if (target == 0)
        {
            ans.push_back(v);
            return;
        }
        if (target < 0)
            return;
        for (int i = start; i < candidates.size(); i++)
        {
            v.push_back(candidates[i]);
            algo(candidates, target - candidates[i], i, v, ans);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> v;
        algo(candidates, target, 0, v, ans);
        return ans;
    }
};
int main(void)
{
    vector<int> v1 = {2, 3, 6, 7}, v2 = {2, 3, 5}, v3 = {2};
    int t1 = 7, t2 = 8, t3 = 1;
    Solution s;
    s.combinationSum(v1, t1);
    s.combinationSum(v2, t2);
    s.combinationSum(v3, t3);
}