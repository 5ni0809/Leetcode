#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
                st.push(c);
            else
            {
                if (st.empty() ||
                    (c == ')' && st.top() != '(') ||
                    (c == ']' && st.top() != '[') ||
                    (c == '}' && st.top() != '{'))
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
int main(void)
{
    Solution s;
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "(]";
    cout << s.isValid(s1) << endl;
    cout << s.isValid(s2) << endl;
    cout << s.isValid(s3) << endl;
}