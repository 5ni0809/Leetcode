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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL)
            return head;
        ListNode *ptr = head;
        int num = 0;
        while (ptr)
        {
            num++;
            ptr = ptr->next;
        }
        if (num == n)
        {
            head = head->next;
            return head;
        }
        ptr = head;
        n = num - n - 1;
        num = 0;
        while (ptr)
        {
            if (num == n)
                ptr->next = ptr->next->next;
            num++;
            ptr = ptr->next;
        }
        return head;
    }
};
int main(void)
{
    ListNode h1[] = {1, 2, 3, 4, 5}, h2[] = {1}, h3[] = {1, 2};
    int n1 = 2, n2 = 1;
    Solution s;
    cout << s.removeNthFromEnd(h1, n1) << endl;
    cout << s.removeNthFromEnd(h2, n2) << endl;
    cout << s.removeNthFromEnd(h3, n2) << endl;
}