//https://www.interviewbit.com/problems/inorder-traversal/

#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<int> inorder(TreeNode *A)
{
    vector<int> traversal;
    stack<TreeNode*> s;
    if (A==NULL)
    {
        return traversal;
    }
    s.push(A);
    while (!s.empty())
    {
        if (s.top()->left!=NULL)
        {
            s.push(s.top()->left);
        }
        else
        {
            traversal.push_back(s.top()->val);
            s.pop();
        }
        
        
    }
    
}