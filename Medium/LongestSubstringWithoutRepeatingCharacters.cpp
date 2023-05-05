#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int len = 0, maxlen = 0, j = 0;
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
            len++;
            while (m[s[i]] > 1)
            {
                m[s[j++]]--;
                len--;
            }
            maxlen = max(maxlen, len);
        }
        cout << maxlen;
        return maxlen;
    }
};
int main(void)
{
    Solution s;
    string str;
    cin >> str;
    s.lengthOfLongestSubstring(str);
}