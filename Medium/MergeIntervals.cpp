#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for (auto x : intervals)
        {
            if (ans.empty() || ans.back()[1] < x[0])
                ans.push_back(x);
            else
                ans.back()[1] = max(ans.back()[1], x[1]);
        }
        return ans;
    }
};
int main(void)
{
    vector<vector<int>> v1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}}, v2 = {{1, 4}, {4, 5}};
    Solution s;
    s.merge(v1);
    s.merge(v2);
}