// https://www.interviewbit.com/problems/path-sum/

#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


int pathsum(TreeNode *A, int B)
{
    if (A == NULL)
    {
        return 0;
    }
    B = B - A->val;
    if (B > 0)
    {
        return pathsum(A->left, B) || pathsum(A->right, B);
    }
    else if (B == 0 && A->left == NULL && A->right == NULL)
    {
        if (A->left || A->right)
        {
            return pathsum(A->left, B) || pathsum(A->right, B);
        }
        
        else
        {
            return 1;
        }
        
    }
}