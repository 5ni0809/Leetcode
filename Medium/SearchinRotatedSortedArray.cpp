#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                return i;
        }
        return -1;
    }
};
int main(void)
{
    vector<int> n1 = {4, 5, 6, 7, 0, 1, 2}, n2 = {1};
    int t1 = 0, t2 = 3;
    Solution s;
    cout << s.search(n1, t1) << endl;
    cout << s.search(n1, t2) << endl;
    cout << s.search(n2, t1) << endl;
}