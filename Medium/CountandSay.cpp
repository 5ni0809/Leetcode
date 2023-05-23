#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string countAndSay(int n, string p = "1")
    {
        if (n == 1)
            return p;
        int i = 0, j, len = p.size();
        string s = "";
        while (i < len)
        {
            j = i;
            while (i < len && p[i] == p[j])
                i++;
            s += to_string(i - j) + p[j];
        }
        return countAndSay(n - 1, s);
    }
};
int main(void)
{
    int n1 = 1, n2 = 4;
    Solution s;
    cout << s.countAndSay(n1) << endl;
    cout << s.countAndSay(n2) << endl;
}