#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int temp;
        for (int i = 0; i < nums.size()-1; i++)
            for (int j = 0; j < nums.size()-1; j++)
                if (nums[j] > nums[j + 1])
                {
                    temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j+1] = temp;
                }
    }
};
int main(void)
{
    vector<int> n1 = {2, 0, 2, 1, 1, 0}, n2 = {2, 0, 1};
    Solution s;
    s.sortColors(n1);
    s.sortColors(n2);
}