#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *tort = head;
        ListNode *hare = head;
        while (1)
        {
            if (hare == NULL || tort == NULL || hare->next == NULL)
            {
                //no cycle
                return NULL;
            }
            tort = tort->next;
            hare = hare->next->next;
            if (tort == hare)
            {
                //cycle detected
                break;
            }
        }
        ListNode *tort2 = head;

        while (1)
        {
            if (tort == tort2)
            {
                break;
            }
            tort = tort->next;
            tort2 = tort2->next;
        }
        return tort;
    }
};

int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = c;
    Solution s;
    cout << s.detectCycle(a);
}