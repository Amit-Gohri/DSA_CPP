// https://www.interviewbit.com/old/problems/construct-binary-tree-from-inorder-and-preorder/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *buildTreeHelper(vector<int> inorder, vector<int> preorder, unordered_map<int, int> &map, int inS, int inE, int preS, int preE)
{
    //              root
    //              /  \   
    //           left  right
    //      pres
    //      ins
    //
    //
    // int lpreS,int lpreE,int linS,int linE,int rpreS,int rpreE,int rinS,int rinE
    if (preS > preE || inS > inE)
    {
        return NULL;
    }

    int data = preorder[preS];
    TreeNode *root = new TreeNode(data);
    //calculate root index
    int inorderRootIndex = map[data];

    int lpreS(preS + 1), lpreE(preS + inorderRootIndex - inS), linS(inS), linE(inorderRootIndex - 1), rpreS(lpreE+1), rpreE(preE), rinS(inorderRootIndex + 1), rinE(inE);

    root->left = buildTreeHelper(inorder, preorder, map, linS, linE, lpreS, lpreE);
    root->right = buildTreeHelper(inorder, preorder, map, rinS, rinE, rpreS, rpreE);

    return root;
}

TreeNode *buildTree(vector<int> inorder, vector<int> preorder)
{
    unordered_map<int, int> map;

    for (int i = 0; i < inorder.size(); i++)
    {
        map[inorder[i]] = i;
    }

    return buildTreeHelper(inorder, preorder, map, 0, inorder.size() - 1, 0, preorder.size() - 1);
}