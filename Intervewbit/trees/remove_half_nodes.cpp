//https://www.interviewbit.com/problems/remove-half-nodes/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *rec(TreeNode *crt, TreeNode *prt, bool lft, TreeNode *root)
{
    if (crt != NULL)
    {
        if (crt->left == NULL || crt->right == NULL)
        {
            if (crt->left == NULL && crt->right == NULL)
            {
                if (root == NULL)
                {
                    root = crt;
                }
            }
            else
            {
                //remove this node
                if (crt->left == NULL)
                {
                    crt = crt->right;

                    if (prt != NULL)
                        lft ? prt->left = crt : prt->right = crt;
                    rec(crt, prt, lft, root);
                }
                else
                {
                    crt = crt->left;
                    lft ? prt->left = crt : prt->right = crt;
                    rec(crt, prt, lft ? 1 : 0, root);
                }
            }
        }
        if (root == NULL)
        {
            root = crt;
        }
        prt = crt;
        rec(crt->left, prt, 1, root);
        rec(crt->right, prt, 0, root);
    }
    return root;
}

TreeNode *sol(TreeNode *A)
{
    return rec(A, NULL, 0, NULL);
}

TreeNode *sol2(TreeNode *A)
{
    if (A == NULL)
    {
        return A;
    }
    else
    {
        A->left = sol2(A->left);
        A->right = sol2(A->right);
        if (A->right == NULL && A->left == NULL)
        { //leaf
            return A;
        }
        if (!A->left)
        {

            return A->right;
        }
        if (!A->right)
        {

            return A->left;
        }
        return A;
    }
}

int main()
{
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    node1->left = node2;
    node1->right = node3;
    node3->left = node4;
    node4->right = node5;
    TreeNode *ans = sol(node1);
}