#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
            for (int j = 0; j <= i; j++)
                swap(matrix[i][j], matrix[j][i]);
        for (int i = 0; i < n; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};
int main(void)
{
    vector<vector<int>> v1 = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}},
                        v2 = {{5, 1, 9, 11},
                              {2, 4, 8, 10},
                              {13, 3, 6, 7},
                              {15, 14, 12, 16}};
    Solution s;
    s.rotate(v1);
    s.rotate(v2);
}