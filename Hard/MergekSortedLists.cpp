#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *merge(vector<ListNode *> &lists, int start, int end)
    {
        int n = end - start;
        if (n == 0)
            return NULL;
        if (n == 1)
            return lists[start];
        ListNode *left = merge(lists, start, start + n / 2);
        ListNode *right = merge(lists, start + n / 2, end);
        ListNode headNode(-1);
        ListNode *mergeLists = &headNode;
        ListNode *currentNode = mergeLists;
        while (left != NULL && right != NULL)
        {
            if (left->val < right->val)
            {
                currentNode->next = left;
                left = left->next;
            }
            else
            {
                currentNode->next = right;
                right = right->next;
            }
            currentNode = currentNode->next;
        }
        currentNode->next = (left != NULL) ? left : right;
        return mergeLists->next;
    }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        return merge(lists, 0, lists.size());
    }
};
int main(void)
{
    //vector<ListNode *> v1 = {{1, 4, 5}, {1, 3, 4}, {2, 6}};
    vector<ListNode *> v2 = {};
    Solution s;
    //s.mergeKLists(v1);
    s.mergeKLists(v2);
}