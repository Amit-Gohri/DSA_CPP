// https://www.interviewbit.com/problems/min-depth-of-binary-tree/
#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int mindepth(TreeNode* A){
    if (A==NULL)
    {
        return 0;
    }
    return min(mindepth(A->left), mindepth(A->right)) + 1;
}