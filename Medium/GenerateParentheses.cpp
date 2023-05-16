#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    void algo(vector<string> &ans, string s, int left, int right, int n)
    {
        if (s.size() == 2 * n)
        {
            ans.push_back(s);
            return;
        }
        if (left < n)
            algo(ans, s + '(', left + 1, right, n);
        if (right < left)
            algo(ans, s + ')', left, right + 1, n);
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        algo(ans, "", 0, 0, n);
        return ans;
    }
};
int main(void)
{
    int n1 = 3, n2 = 1;
    Solution s;
    s.generateParenthesis(n1);
    s.generateParenthesis(n2);
}