#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    // bool rec(TreeNode *root, int parent, int leftGrandChild)
    // {
    //     bool leftCheck(0);
    //     bool rightCheck(0);
    //     if (root == NULL)
    //     {
    //         return true;
    //     }
    //     if (root->left != NULL)
    //     {
    //         if (root->left->val < root->val)
    //         {
    //             if (leftGrandChild)
    //             {
    //                 if (root->left->val < parent)
    //                 {
    //                     leftCheck = 1;
    //                 }

    //             }
    //             else
    //             {
    //                 if (root->left->val > parent)
    //                 {
    //                     leftCheck = 1;
    //                 }

    //             }
    //         }
    //     }
    //     else
    //     {
    //         leftCheck = 1;
    //     }

    //     if (root->right != NULL)
    //     {
    //         if (root->right->val > root->val)
    //         {
    //             if (leftGrandChild)
    //             {
    //                 if (root->right->val < parent)
    //                 {
    //                     rightCheck = 1;
    //                 }

    //             }
    //             else
    //             {
    //                 if (root->right->val > parent)
    //                 {
    //                     rightCheck = 1;
    //                 }

    //             }
    //         }
    //     }
    //     else
    //     {
    //         rightCheck = 1;
    //     }

    //     if (leftCheck && rightCheck)
    //     {
    //         return rec(root->left, root->val, 1) && rec(root->right, root->val, 0);
    //     }
    //     else
    //         return 0;
    // }
    //very wrong approach

    int isValidNode(TreeNode *root, int left, int right)
    {
        if (root == NULL)
        {
            return 1;
        }

        if (root->val >= left && root->val <= right)
        {
            return isValidNode(root->left, left, root->val) && isValidNode(root->right, root->val, right);
        }
        else
        {
            return 0;
        }
    }

    bool isValidBST(TreeNode *root)
    {
        return isValidNode(root, INT_MIN, INT_MAX);
    }
};