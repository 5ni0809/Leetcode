#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        if (m == 1 || n == 1)
            return 1;
        vector<vector<int>> v(m, vector<int>(n, 0));
        for (int i = 1; i < m; i++)
            v[i][0] = 1;
        for (int j = 1; j < n; j++)
            v[0][j] = 1;
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                v[i][j] = v[i - 1][j] + v[i][j - 1];
        return v[m - 1][n - 1];
    }
};
int main(void)
{
    int m1 = 3, n1 = 7, n2 = 2;
    Solution s;
    cout << s.uniquePaths(m1, n1) << endl;
    cout << s.uniquePaths(m1, n2) << endl;
}