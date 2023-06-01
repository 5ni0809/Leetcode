#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isMatch(string s, string p)
    {
        int m = s.size(), n = p.size();
        vector<vector<bool>> v(m + 1, vector<bool>(n + 1, false));
        v[0][0] = true;
        for (int i = 0; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (p[j - 1] == '*')
                    v[i][j] = v[i][j - 2] || (i && v[i - 1][j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.'));
                else if (i > 0 && (s[i - 1] == p[j - 1] || p[j - 1] == '.'))
                    v[i][j] = v[i - 1][j - 1];
            }
        }
        return v[m][n];
    }
};
int main(void)
{
    string s1 = "aa", s2 = "ab", p1 = "a", p2 = "a*", p3 = ".*";
    Solution s;
    cout << s.isMatch(s1, p1) << endl;
    cout << s.isMatch(s1, p2) << endl;
    cout << s.isMatch(s2, p3) << endl;
}