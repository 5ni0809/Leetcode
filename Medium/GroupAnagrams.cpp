#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> m;
        for (string s : strs)
        {
            string t = s;
            sort(t.begin(), t.end());
            m[t].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto a : m)
            ans.push_back(a.second);
        return ans;
    }
};
int main(void)
{
    vector<string> s1 = {"eat", "tea", "tan", "ate", "nat", "bat"}, s2 = {""}, s3 = {"a"};
    Solution s;
    s.groupAnagrams(s1);
    s.groupAnagrams(s2);
    s.groupAnagrams(s3);
}