#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool check(string &s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s)
    {
        int t = 0, max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                if (check(s, i, j))
                {
                    if (j - i + 1 > max)
                    {
                        max = j - i + 1;
                        t = i;
                    }
                }
            }
        }
        return s.substr(t, max);
    }
};
int main(void)
{
    Solution s;
    string s1 = "babad", s2 = "cbbd";
    cout << s.longestPalindrome(s1) << endl;
    cout << s.longestPalindrome(s2) << endl;
}