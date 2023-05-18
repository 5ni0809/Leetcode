#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        /*if (dividend >= -1 * pow(2, 31) && divisor <= pow(2, 31) - 1)
            return int(dividend / divisor);*/
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        return dividend / divisor;
    }
};
int main(void)
{
    int d1 = 10, d2 = 7, d3 = -2147483648;
    int s1 = 3, s2 = -3, s3 = -1;
    Solution s;
    cout << s.divide(d1, s1) << endl;
    cout << s.divide(d2, s2) << endl;
    cout << s.divide(d3, s3) << endl;
}