#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans = "";
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string first = strs[0], last = strs[n - 1];
        for (int i = 0; i < min(first.size(), last.size()); i++)
        {
            if (first[i] != last[i])
                return ans;
            ans += first[i];
            cout << ans << endl;
        }
        return ans;
    }
};
int main(void)
{
    vector<string> v1 = {"flower", "flow", "flight"};
    vector<string> v2 = {"dog", "racecar", "car"};
    Solution s;
    cout << s.longestCommonPrefix(v1) << endl;
    cout << s.longestCommonPrefix(v2) << endl;
}