#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    void letterCombinations(string digits, vector<string> &ans, string &str, vector<string> &v, int index)
    {
        if (index == digits.size())
        {
            ans.push_back(str);
            return;
        }
        string value = v[digits[index] - '0'];
        for (int i = 0; i < value.size(); i++)
        {
            str.push_back(value[i]);
            letterCombinations(digits, ans, str, v, index + 1);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return {};
        vector<string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        string str;
        letterCombinations(digits, ans, str, v, 0);
        return ans;
    }
};
int main(void)
{
    string s1 = "23", s2 = "", s3 = "2";
    Solution s;
    s.letterCombinations(s1);
    s.letterCombinations(s2);
    s.letterCombinations(s3);
}