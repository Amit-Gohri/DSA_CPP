// Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

// Try solving it using constant additional space.

// Example :

// Input :

//                   ______
//                  |     |
//                  \/    |
//         1 -> 2 -> 3 -> 4

// Return the node corresponding to node 3.

#include <bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *tort = A;
        ListNode *hare = A;
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
        ListNode *tort2 = A;
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