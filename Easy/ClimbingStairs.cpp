#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2)
            return n;
        vector<int> v(n + 1);
        v[0] = 0, v[1] = 1, v[2] = 2;
        for (int i = 3; i <= n; i++)
            v[i] = v[i - 1] + v[i - 2];
        return v[n];
    }
};
int main(void)
{
    int n1 = 2, n2 = 3;
    Solution s;
    cout << s.climbStairs(n1) << endl;
    cout << s.climbStairs(n2) << endl;
}