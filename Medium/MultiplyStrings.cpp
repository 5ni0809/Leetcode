#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
            return 0;
        vector<int> v(num1.size() + num2.size(), 0);
        for (int i = num1.size() - 1; i >= 0; --i)
        {
            for (int j = num2.size() - 1; j >= 0; --j)
            {
                v[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                v[i + j] += v[i + j + 1] / 10;
                v[i + j + 1] %= 10;
            }
        }
        int k = 0;
        while (k < v.size() && v[k] == 0)
            ++k;
        string ans = "";
        while (k < v.size())
            ans.push_back(v[k++] + '0');
        return ans;
    }
};
int main(void)
{
    string s1 = "2", s2 = "3", s3 = "123", s4 = "456";
    Solution s;
    cout << s.multiply(s1, s2) << endl;
    cout << s.multiply(s3, s4) << endl;
}