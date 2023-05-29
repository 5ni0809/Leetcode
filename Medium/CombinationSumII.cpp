#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> vec;
    vector<vector<int>> ans;
    void algo(int n, vector<int> &v, int i)
    {
        if (n < 0)
            return;
        if (n == 0)
        {
            ans.push_back(vec);
            return;
        }
        for (int j = i; j < v.size(); j++)
        {
            if (n - v[j] < 0)
                break;
            vec.push_back(v[j]);
            algo(n - v[j], v, j + 1);
            vec.pop_back();
            while (j + 1 < v.size() && v[j] == v[j + 1])
                j++;
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        algo(target, candidates, 0);
        return ans;
    }
};
int main(void)
{
    vector<int> c1 = {10, 1, 2, 7, 6, 1, 5}, c2 = {2, 5, 2, 1, 2};
    int t1 = 8, t2 = 5;
    Solution s;
    s.combinationSum2(c1, t1);
    s.combinationSum2(c2, t2);
}