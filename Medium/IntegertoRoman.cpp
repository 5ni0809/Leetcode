#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        string ans = "";
        vector<pair<int, string>> v = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}};

        for (int i = 0; i < v.size(); i++)
        {
            while (num >= v[i].first)
            {
                ans += v[i].second;
                num -= v[i].first;
            }
        }
        return ans;
    }
};
int main(void)
{
    int n1 = 3, n2 = 58, n3 = 1994;
    Solution s;
    cout << s.intToRoman(n1) << endl;
    cout << s.intToRoman(n2) << endl;
    cout << s.intToRoman(n3) << endl;
}