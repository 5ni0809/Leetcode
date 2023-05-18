#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int t = -1, n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] < nums[i + 1])
                t = i;
        }
        if (t == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        int j = t + 1;
        for (int i = j; i < n; i++)
            if (nums[i] > nums[t])
                j = i;
        swap(nums[t], nums[j]);
        reverse(nums.begin() + 1 + t, nums.end());
        return;
    }
};
int main(void)
{
    vector<int> n1 = {1, 2, 3}, n2 = {3, 2, 1}, n3 = {1, 1, 5};
    Solution s;
    s.nextPermutation(n1);
    s.nextPermutation(n2);
    s.nextPermutation(n3);
}