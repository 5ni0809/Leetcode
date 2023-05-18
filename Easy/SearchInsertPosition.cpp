#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int i;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= target)
                return i;
        }
        return i;
    }
};
int main(void)
{
    vector<int> n1 = {1, 3, 5, 6};
    int t1 = 5, t2 = 2, t3 = 7;
    Solution s;
    cout << s.searchInsert(n1, t1) << endl;
    cout << s.searchInsert(n1, t2) << endl;
    cout << s.searchInsert(n1, t3) << endl;
}