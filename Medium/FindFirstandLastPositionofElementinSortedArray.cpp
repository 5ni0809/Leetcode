#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = -1, last = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            if (nums[i] == target)
            {
                first = i;
                break;
            }
        for (int j = n - 1; j >= 0; j--)
            if (nums[j] == target)
            {
                last = j;
                break;
            }
        cout << first << " " << last << endl;
        // return {first, last};
    }
};
int main(void)
{
    vector<int> n1 = {5, 7, 7, 8, 8, 10}, n2 = {};
    int t1 = 8, t2 = 6, t3 = 0;
    Solution s;
    s.searchRange(n1, t1);
    s.searchRange(n1, t2);
    s.searchRange(n2, t3);
}