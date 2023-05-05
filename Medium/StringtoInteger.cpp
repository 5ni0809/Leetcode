#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        long long ans = 0;
        bool t = 0;
        int i = 0;
        while (s[i] == ' ')
            i++;
        if (s[i] == '-' || s[i] == '+')
        {
            if (s[i] == '-')
                t = 1;
            i++;
        }
        for (; s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                if (!t && ans >= (pow(2, 31) - 1))
                {
                    ans = pow(2, 31) - 1;
                    break;
                }
                if (t && ans > (pow(2, 31)))
                {
                    ans = pow(2, 31) * -1;
                    break;
                }
                ans *= 10;
                ans += (s[i] - '0');
            }
            else
                break;
        }
        if (t && ans > 0)
            ans *= -1;
        if (ans >= (pow(2, 31) - 1))
            ans = pow(2, 31) - 1;
        if (ans <= (-1 * pow(2, 31)))
            ans = -1 * pow(2, 31);
        return ans;
    }
    int myAtoi_ex(string s)
    {
        int i = 0, k = s.size();
        string ans;
        while (k--)
        {
            if (s[i] == ' ')
            {
                if (('a' <= s[i + 1] && s[i + 1] <= 'z') || ('A' <= s[i + 1] && s[i + 1] <= 'Z'))
                    break;
            }
            if (s[i] >= '0' || s[i] <= '9')
            {
                ans += s[i];
                i++;
            }
        }
        cout << ans << endl;
    }
};
int main(void)
{
    string s1 = "42";
    string s2 = " -42";
    string s3 = "4193 with words";
    Solution s;
    s.myAtoi(s1);
    s.myAtoi(s2);
    s.myAtoi(s3);
}