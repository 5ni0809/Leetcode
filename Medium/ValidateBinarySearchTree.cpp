#include <iostream>
#include <climits>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool check(TreeNode *root, long min, long max)
    {
        if (!root)
            return true;
        if (root->val <= min || root->val >= max)
            return false;
        return (check(root->left, min, root->val) && check(root->right, root->val, max));
    }
    bool isValidBST(TreeNode *root)
    {
        return check(root, LONG_MIN, LONG_MAX);
    }
};
int main(void)
{
    TreeNode t1[] = {2, 1, 3}, t2[] = {5, 1, 4, NULL, NULL, 3, 6};
    Solution s;
    cout << s.isValidBST(t1) << endl;
    cout << s.isValidBST(t2) << endl;
}