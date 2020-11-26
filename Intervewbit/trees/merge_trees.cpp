//https://www.interviewbit.com/problems/merge-two-binary-tree/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *merge_tree(TreeNode *A, TreeNode *B)
{
}

TreeNode *merge_tree(TreeNode *A, TreeNode *B)
{
    //merge in A
    //do operation for the current node
    //go to left and right
    //poddible cases 1- both not null
    // one is null  , both are null

    if (A == NULL)
    {
        if (B == NULL)
        {
            
        }
        else
        {
            
            A = B;
            
        }
    }
    else
    {
        if (B==NULL)
        {
            
        }
        else
        {
            A->val += B->val;
            merge_tree(A->left, B->left);
            merge_tree(A->right, B->right);
        }
        
        
    }
    return A;   
}
