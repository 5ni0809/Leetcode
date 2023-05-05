#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        int y = x, n = 0;
        while (y != 0)
        {
            n = n * 10 + y % 10;
            y /= 10;
        }
        return n == x;
    }
};
int main(void)
{
    Solution s;
    cout << s.isPalindrome(121) << endl;
    cout << s.isPalindrome(-121) << endl;
    cout << s.isPalindrome(10) << endl;
}
