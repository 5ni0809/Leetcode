#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;
        string ans = "";
        int k = 2 * numRows - 2;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; i + j < s.length(); j += k)
            {
                ans += s[i + j];
                if (i != 0 && i != numRows - 1 && j + k - i < s.length())
                    ans += s[j + k - i];
            }
        }
        return ans;
    }
};
int main(void)
{
    string s1 = "PAYPALISHIRING", s2 = "A";
    int n1 = 3, n2 = 4, n3 = 1;
    Solution s;
    cout << s.convert(s1, n1) << endl;
    cout << s.convert(s1, n2) << endl;
    cout << s.convert(s2, n3) << endl;
}