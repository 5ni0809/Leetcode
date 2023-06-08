#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size(), t = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                ++digits[i];
                return digits;
            }
            else
                digits[i] = 0;
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};
int main(void)
{
    vector<int> v1 = {1, 2, 3}, v2 = {4, 3, 2, 1}, v3 = {9};
    Solution s;
    s.plusOne(v1);
    s.plusOne(v2);
    s.plusOne(v3);
}