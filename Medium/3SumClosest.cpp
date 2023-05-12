#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int threeSumClosestx(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    int diff = abs(sum - target);
                    if (diff == 0)
                        return sum;
                    if (diff < abs(ans - target))
                        ans = sum;
                }
            }
        }
        return ans;
    }
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closest_sum = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < n - 2; i++)
        {
            int left = i + 1, right = n - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target)
                    return sum;
                else if (sum < target)
                    left++;
                else
                    right--;
                if (abs(sum - target) < abs(closest_sum - target))
                    closest_sum = sum;
            }
        }
        return closest_sum;
    }
};
int main(void)
{
    vector<int> n1 = {-1, 2, 1, -4}, n2 = {0, 0, 0}, n3 = {1, 1, 1, 1};
    int t1 = 1, t2 = 4;
    Solution s;
    cout << s.threeSumClosest(n1, t1) << endl;
    cout << s.threeSumClosest(n2, t1) << endl;
    cout << s.threeSumClosest(n3, t2) << endl;
}