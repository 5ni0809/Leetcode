#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int h = x, l = 0;
        while (h > l)
        {
            long int m = l + ((long int)h - l + 1) / 2;
            if (m <= sqrt(x))
                l = m;
            else
                h = m - 1;
        }
        return l;
    }
};
int main(void)
{
    int x1 = 4, x2 = 8;
    Solution s;
    cout << s.mySqrt(x1) << endl;
    cout << s.mySqrt(x2) << endl;
}