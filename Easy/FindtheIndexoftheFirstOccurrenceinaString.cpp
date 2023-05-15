#include <iostream>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.length();
        int m = needle.length();
        if (m == 0)
            return 0;
        for (int i = 0; i <= n - m; i++)
        {
            bool t = 1;
            for (int j = 0; j < m; j++)
            {
                if (haystack[i + j] != needle[j])
                {
                    t = 0;
                    break;
                }
            }
            if (t)
                return i;
        }
        return -1;
    }
    int strStrx(string haystack, string needle)
    {
        int i = 0, j = 0, k = haystack.length();
        while (k--)
        {
            bool t = 0;
            if (haystack[i] == needle[j])
            {
                cout << haystack[i];
                i++;
                j++;
                if (j == needle.length())
                    t = 1;
            }
            else
                i++;
            if (t)
                return i - j;
        }
        return -1;
    }
};
int main(void)
{
    string s1 = "sadbutsad", s2 = "sad";
    string s3 = "leetcode", s4 = "leeto";
    string s5 = "hello", s6 = "ll";
    Solution s;
    cout << s.strStr(s1, s2) << endl;
    cout << s.strStr(s3, s4) << endl;
    cout << s.strStr(s5, s6) << endl;
}
