#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *mergeLists(vector<ListNode *> &A)
{
    priority_queue<pair<int, ListNode *>, vector<pair<int, ListNode *>>, greater<pair<int, ListNode *>>> pq;
    ListNode *head = NULL;
    ListNode *next = NULL;
    ListNode *node = NULL;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i])
            pq.push({A[i]->val, A[i]});
    }

    while (!pq.empty())
    {

        if (head == NULL)
        {
            node = new ListNode(pq.top().second->val);
            head = node;
        }
        else
        {
            node->next = new ListNode(pq.top().second->val);
            node = node->next;
        }
        next = pq.top().second->next;
        pq.pop();
        if (next)
        {
            pq.push({next->val, next});
        }
    }

    return head;

    //we need min element at the top so we create a minHeap
}