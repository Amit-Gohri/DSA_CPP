// https://www.interviewbit.com/problems/max-depth-of-binary-tree/
#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void rec(TreeNode* A, int depth){
    if (A)
    {
        
    }
    
}

int depth(TreeNode* A){
    int depth(0);
    if (A == NULL)
    {
        return 0;
    }
    rec(A, depth);
}