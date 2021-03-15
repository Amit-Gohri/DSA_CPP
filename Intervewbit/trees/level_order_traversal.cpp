#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void rec(vector<TreeNode *> parent, vector<vector<TreeNode *>> &ans)
{
    int size = parent.size();
    vector<TreeNode *> child;
    for (int i = 0; i < size; i++)
    {
        if (parent[i] != NULL)
        {
            //cout << parent[i]->left << parent[i]->right;
            if (parent[i]->left)
                child.push_back(parent[i]->left);
            if (parent[i]->right)
                child.push_back(parent[i]->right);
        }
    }
    vector<int> a;
    for (int i = 0; i < child.size(); i++)
    {

        a.push_back(child[i]->val);
    }
    ans.push_back(a);

    for (int i = 0; i < child.size(); i++)
    {
        if (child[i] != NULL)
        {
            rec(child, ans);
        }
    }
}

void rec1(vector<vector<TreeNode *>> ans)
{
}

void level_order(TreeNode *A)
{
    vector<TreeNode *> parent;
    parent.push_back(A);
    rec(parent, {{}});
}