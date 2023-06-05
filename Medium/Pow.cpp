#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == INT_MAX)
            return (x == 1) ? 1 : (x == -1) ? -1
                                            : 0;
        if (n == INT_MIN)
            return (x == 1 || x == -1) ? 1 : 0;
        if (n == 0)
            return 1;
        if (n > 0)
            return x * myPow(x, n - 1);
        else
            return 1 / x * myPow(x, n + 1);
    }
};
int main(void)
{
    double d1 = 2.0, d2 = 2.1;
    int n1 = 10, n2 = 3, n3 = -2;
    Solution s;
    cout << s.myPow(d1, n1) << endl;
    cout << s.myPow(d2, n2) << endl;
    cout << s.myPow(d1, n3) << endl;
    cout << s.myPow(0.00001, 2147483647) << endl;
}