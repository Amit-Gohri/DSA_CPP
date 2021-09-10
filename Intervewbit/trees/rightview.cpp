// https://www.interviewbit.com/problems/right-view-of-binary-tree/
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> right_side(TreeNode *A)
{
    vector<int> ans;
    int level(0);
    queue<pair<TreeNode *, int>> q; // treenode,level
    if (A == NULL)
    {
        return ans;
    }
    q.push({A, 0});
    while (!q.empty())
    {

        //check level
        pair<TreeNode *, int> p = q.front();
        if (p.second > level)
        {
            ans.push_back(p.first->val);
            level = p.second;
        }
        // pop and push left and right child
        if (p.first->left)
            q.push({p.first->left, p.second + 1});
        if (p.first->right)
            q.push({p.first->right, p.second + 1});
        q.pop();
    }
    return ans;
}

vector<int> right_side(TreeNode *root)
{
    vector<int> ans;
    int level(-1);
    queue<pair<TreeNode *, int>> q; // treenode,level
    if (root == NULL)
    {
        return ans;
    }
    q.push({root, 0});
    while (!q.empty())
    {

        //check level
        pair<TreeNode *, int> p = q.front();
        if (p.second > level)
        {
            ans.push_back(p.first->val);
            level = p.second;
        }
        // pop and push left and right child
        if (p.first->right)
            q.push({p.first->right, p.second + 1});
        if (p.first->left)
            q.push({p.first->left, p.second + 1});
        q.pop();
    }
    return ans;
}