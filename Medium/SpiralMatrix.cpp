#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = n - 1, top = 0, bottom = m - 1;
        if (matrix.empty() || matrix[0].empty())
            return ans;
        while (l <= r && top <= bottom)
        {
            for (int i = l; i <= r; i++)
                ans.push_back(matrix[top][i]);
            top++;
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][r]);
            }
            r--;
            if (top <= bottom)
            {
                for (int i = r; i >= l; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }
            if (l <= r)
            {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][l]);
                l++;
            }
        }
        return ans;
    }
};
int main(void)
{
    vector<vector<int>> v1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, v2 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    Solution s;
    s.spiralOrder(v1);
    s.spiralOrder(v2);
}