#include <iostream>
using namespace std;

// Definition for singly-linked list.
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        if ((list1->val) < list2->val)
        {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};
int main(void)
{
    Solution s;
    ListNode l1[3] = {1, 2, 4}, l2[3] = {1, 3, 4}, l3[1] = {}, l4[1] = {}, l5[1] = {0};
    cout << s.mergeTwoLists(l1, l2) << endl;
    cout << s.mergeTwoLists(l3, l4) << endl;
    cout << s.mergeTwoLists(l4, l5) << endl;
}