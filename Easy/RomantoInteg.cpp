#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int sum = 0;
        unordered_map<char, int> m{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] < m[s[i + 1]])
                sum -= m[s[i]];
            else
                sum += m[s[i]];
        }
        return sum;
    }
};
int main(void)
{
    Solution s;
    string str;
    cin >> str;
    s.romanToInt(str);
    return 0;
}