#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long ans = 0;
        while (x)
        {
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        if (ans > INT_MAX || ans < INT_MIN)
            return 0;
        // cout << 0 << endl;
        else
            return ans;
        // cout << ans << endl;
    }
};
int main(void)
{
    Solution s;
    s.reverse(123);
    s.reverse(-123);
    s.reverse(120);
    s.reverse(1534236469);
}