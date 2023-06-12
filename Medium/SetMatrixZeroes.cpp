#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        set<int> s1, s2;
        // set 容器裡面的元素是唯一的，具有不重複的特性，而且是有排序的容器，set 容器裡面元素的值是不可修改，但 set 容器可以插入或刪除元素
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (matrix[i][j] == 0)
                {
                    // set 插入元素
                    s1.insert(i);
                    s2.insert(j);
                }
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (s1.count(i) || s2.count(j))
                    // set 判斷元素是否存在,存在該元素的話回傳 1，不存在的話回傳 0
                    matrix[i][j] = 0;
    }
};
int main(void)
{
    vector<vector<int>> m1 = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}},
                        m2 = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    Solution s;
    s.setZeroes(m1);
    s.setZeroes(m2);
}