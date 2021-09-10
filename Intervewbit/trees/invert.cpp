//https://www.interviewbit.com/problems/invert-the-binary-tree/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* invert(TreeNode* A){
    if (A==NULL)
    {
        return A;
    }
    TreeNode *temp;
    temp = A->left;
    A->left = A->right;
    A->right = temp;
    invert(A->left);
    invert(A->right);
    return A;
}