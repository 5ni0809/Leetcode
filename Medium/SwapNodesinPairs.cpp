#include <iostream>
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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *temp = swapPairs(head->next->next);
        ListNode *t = head;
        head = head->next;
        head->next = t;
        head->next->next = temp;
        return head;
    }
};
int main(void)
{
    ListNode h1[] = {1, 2, 3, 4}, h2[1] = {}, h3[] = {1};
    Solution s;
    cout << s.swapPairs(h1) << endl;
    cout << s.swapPairs(h2) << endl;
    cout << s.swapPairs(h3) << endl;
}