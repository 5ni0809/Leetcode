#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        vector<int> ans;
        int max = INT_MIN, sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum > max)
                max = sum;
            if (sum < 0)
                sum = 0;
        }
        return max;
    }
};
int main(void)
{
    vector<int> v1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4}, v2 = {1}, v3 = {5, 4, -1, 7, 8};
    Solution s;
    cout << s.maxSubArray(v1) << endl;
    cout << s.maxSubArray(v2) << endl;
    cout << s.maxSubArray(v3) << endl;
}