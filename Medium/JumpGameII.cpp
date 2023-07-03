#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
            nums[i] = max(nums[i] + 1, nums[i - 1]);
        int t = 0, ans = 0;
        while (t < n - 1)
        {
            ans++;
            t = nums[t];
        }
        return ans;
    }
};
int main(void)
{
    vector<int> n1 = {2, 3, 1, 1, 4}, n2 = {2, 3, 0, 1, 4};
    Solution s;
    cout << s.jump(n1) << endl;
    cout << s.jump(n2) << endl;
}