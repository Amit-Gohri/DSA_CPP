//https://www.interviewbit.com/problems/kth-smallest-element-in-tree/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


void inorder(TreeNode* A, vector<int> in)
{    
    if (A == NULL)
    {
        return;
    }
    inorder(A->left, in);
    in.push_back(A->val);
    inorder(A->right, in);
}

int kth_small(TreeNode* A, int k)
{
    vector<int> in;
    inorder(A, in);
    return in[k - 1];
}

