//https://www.interviewbit.com/problems/kth-smallest-element-in-tree/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int kth_small(TreeNode* A)
{
    if (A!=NULL)
    {
        kth_small(A)
    }
    
}