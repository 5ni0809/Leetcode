#include <iostream>
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
    bool mirror(TreeNode *left, TreeNode *right)
    {
        if (!left && !right)
            return true;
        if (!left || !right)
            return false;
        return (left->val == right->val) && mirror(left->left, right->right) && mirror(left->right, right->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;
        return mirror(root->left, root->right);
    }
};
int main(void)
{
    TreeNode t1[] = {1, 2, 2, 3, 4, 4, 3}, t2[] = {1, 2, 2, NULL, 3, NULL, 3};
    Solution s;
    cout << s.isSymmetric(t1) << endl;
    cout << s.isSymmetric(t2) << endl;
}