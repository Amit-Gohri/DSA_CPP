//https://www.interviewbit.com/problems/balanced-binary-tree/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int height_of_tree(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int Lheight(0), Rheight(0);
    if (root->left)
    {
        Lheight = height_of_tree(root->left);
    }
    if (root->right)
    {
        Rheight = height_of_tree(root->right);
    }

    return max(Rheight, Lheight) + 1;

}

bool rec(TreeNode* root){
    if (root == NULL)
    {
        return 1;
    }
    int Lh = height_of_tree(root->left);
    int rh = height_of_tree(root->right);
    int diff = abs(Lh - rh);
    bool a = diff > 1 ? 0 : 1;
    bool l = rec(root->left);
    bool r = rec(root->right);
    return (l & r) & a;
}

bool bbt(TreeNode *root)
{
    return rec(root);
}