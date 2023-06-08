#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int m = 0, n = nums.size();
        if (n == 0)
            return false;
        for (int i = 0; i < n; i++)
        {
            if (i > m)
                return false;
            if (m > n)
                return true;
            m = max(m, i + nums[i]);
        }
        return true;
    }
};
int main(void)
{
    vector<int> v1 = {2, 3, 1, 1, 4}, v2 = {3, 2, 1, 0, 4}, v3 = {0};
    Solution s;
    cout << s.canJump(v1) << endl;
    cout << s.canJump(v2) << endl;
    cout << s.canJump(v3) << endl;
}