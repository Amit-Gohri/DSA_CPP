//https://www.interviewbit.com/problems/identical-binary-trees/

#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool iden_tree(TreeNode *A, TreeNode *B)
{
    // if (A == B)
    // {
    //     if (A == NULL)
    //     {
    //         return 1;
    //     }
    //     else
    //     {
    //         bool a = iden_tree(A->left, B->left);
    //         bool b = iden_tree(A->right, B->right);
    //         if (a == b == 1)
    //         {
    //             return 1;
    //         }
    //         else
    //         {
    //             return 0;
    //         }
    //     }
    // }
    // else
    // {
    //     return 0;
    // }
    if (A == NULL && B == NULL)
    {
        return 1;
    }
    else if (A == NULL || B == NULL)
    {
        return 0;
    }
    else
    {
        if (A->val == B->val)
        {
            int a = iden_tree(A->left, B->left);
            int b = iden_tree(A->right, B->right);
            if (a == 1 && b == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
        
    }
}