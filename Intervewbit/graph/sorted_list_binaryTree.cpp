// https://www.interviewbit.com/problems/convert-sorted-list-to-binary-search-tree/
#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 

int countNodes(ListNode* A){
    int n(0);
    while (A)
    {
        A = A->next;
        n++;
    }
    return n;
}

TreeNode* SortedListToBST(ListNode* A){
    //go to middleNode 
    //select Node and make treeNode
    if (A == NULL)
    {
        return NULL;
    }
    
    int n = countNodes(A);
    int mid = n / 2;
    ListNode *traverse = A;
    ListNode *parent = NULL;
    while (mid--)
    {
        if (parent == NULL)
        {
            parent = A;
        }
        
        else parent = parent->next;
        
        traverse = traverse->next;
    }
    TreeNode* node = new TreeNode(traverse->val);
    if(parent) parent->next = NULL;
    node->left = SortedListToBST(A);
    node->right = SortedListToBST(traverse->next);
    return node;
}

int main(){
    ListNode *node1 = new ListNode(1);
}