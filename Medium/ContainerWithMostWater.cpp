#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int area = 0, n = height.size();
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (height[i] > height[j])
            {
                area = max(area, height[j] * (j - i));
                j--;
            }
            else
            {
                area = max(area, height[i] * (j - i));
                i++;
            }
        }
        return area;
    }
};
int main(void)
{
    Solution s;
    vector<int> v1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> v2 = {1, 1};
    s.maxArea(v1);
    s.maxArea(v2);
}