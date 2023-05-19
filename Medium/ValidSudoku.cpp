#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool algo(vector<vector<char>> &b, char v, int x, int y)
    {
        for (int i = 0; i < 9; i++)
        {
            if (b[x][i] == v && i != y)
                return false;
            if (b[i][y] == v && i != x)
                return false;
            if (b[3 * (x / 3) + i / 3][3 * (y / 3) + i % 3] == v && x != (3 * (x / 3) + i / 3) && (3 * (y / 3) + i % 3) != y)
                return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    bool var = algo(board, board[i][j], i, j);
                    if (var == false)
                        return false;
                }
            }
        }
        return true;
    }
};
int main(void)
{
    vector<vector<char>> b1 = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                               {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                               {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                               {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                               {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                               {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                               {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                               {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                               {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    vector<vector<char>> b2 = {{'8', '3', '.', '.', '7', '.', '.', '.', '.'},
                               {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                               {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                               {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                               {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                               {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                               {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                               {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                               {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    Solution s;
    cout << s.isValidSudoku(b1) << endl;
    cout << s.isValidSudoku(b2) << endl;
}