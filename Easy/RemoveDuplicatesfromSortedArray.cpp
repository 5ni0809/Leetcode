#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[k] != nums[i])
            {
                k++;
                nums[k] = nums[i];
            }
        }
        return k + 1;
    }
};
int main(void)
{
    vector<int> n1 = {1, 1, 2}, n2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution s;
    cout << s.removeDuplicates(n1) << endl;
    cout << s.removeDuplicates(n2) << endl;
}