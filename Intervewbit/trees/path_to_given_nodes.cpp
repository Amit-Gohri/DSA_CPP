//https://www.interviewbit.com/problems/path-to-given-node/

#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> rec(TreeNode *root, int B, vector<int> dist)
{
    if (root == NULL)
    {
        return {};
    }
    int val = root->val;
    dist.push_back(val);

    if (val == B)
    {

        return dist;
    }
    else
    {
        vector<int> L, R;

        L = rec(root->left, B, dist);

        R = rec(root->right, B, dist);

        if (L.size() == 0)
        {
            return R;
        }
        return L;
    }
}

vector<int> solve(TreeNode *A, int B)
{
    return rec(A, B, {});
}