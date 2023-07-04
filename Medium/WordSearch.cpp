#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
private:
    bool algo(vector<vector<char>> &board, vector<vector<bool>> &v, string &word, int i, int j, int start)
    {
        int m = board.size(), n = board[0].size();
        if (start == word.size())
            return true;
        if (i < 0 || i >= m || j < 0 || j >= n || v[i][j] || board[i][j] != word[start])
            return false;
        v[i][j] = true;
        bool ans = algo(board, v, word, i + 1, j, start + 1) ||
                   algo(board, v, word, i - 1, j, start + 1) ||
                   algo(board, v, word, i, j + 1, start + 1) ||
                   algo(board, v, word, i, j - 1, start + 1);
        v[i][j] = false;
        return ans;
    }

public:
    bool exist(vector<vector<char>> &board, string word)
    {
        int m = board.size(), n = board[0].size();
        vector<vector<bool>> v(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (algo(board, v, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
};
int main(void)
{
    vector<vector<char>> b = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    string w1 = "ABCCED", w2 = "SEE", w3 = "ABCB";
    Solution s;
    cout << s.exist(b, w1) << endl;
    cout << s.exist(b, w2) << endl;
    cout << s.exist(b, w3) << endl;
}