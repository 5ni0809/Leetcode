#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != val)
            {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};
int main(void)
{
    vector<int> n1 = {3, 2, 2, 3}, n2 = {0, 1, 2, 2, 3, 0, 4, 2}, n3 = {1};
    int v1 = 3, v2 = 2, v3 = 1;
    Solution s;
    cout << s.removeElement(n1, v1) << endl;
    cout << s.removeElement(n2, v2) << endl;
    cout << s.removeElement(n3, v3) << endl;
}