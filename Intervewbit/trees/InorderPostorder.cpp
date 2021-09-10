// https://www.interviewbit.com/old/problems/construct-binary-tree-from-inorder-and-postorder/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *buildTreeHelper(vector<int> inorder, vector<int> postorder, unordered_map<int, int> &map, int inS, int inE, int postS, int postE)
{
    //              root
    //              /  \   
    //           left  right
    //      posts
    //      ins
    //
    //
    // int lpostS,int lpostE,int linS,int linE,int rpostS,int rpostE,int rinS,int rinE
    if (postS > postE || inS > inE)
    {
        return NULL;
    }

    int data = postorder[postE];
    TreeNode *root = new TreeNode(data);
    //calculate root index
    int inorderRootIndex = map[data];

    int lpostS(postS),//
        lpostE(postS + inorderRootIndex - inS),//
        linS(inS),//
        linE(inorderRootIndex - 1),
        rpostS(lpostE + 1),
        rpostE(postE - 1),
        rinS(inorderRootIndex + 1),
        rinE(inE);

    root->left = buildTreeHelper(inorder, postorder, map, linS, linE, lpostS, lpostE);
    root->right = buildTreeHelper(inorder, postorder, map, rinS, rinE, rpostS, rpostE);

    return root;
}

TreeNode *buildTree(vector<int> inorder, vector<int> postorder)
{
    unordered_map<int, int> map;

    for (int i = 0; i < inorder.size(); i++)
    {
        map[inorder[i]] = i;
    }

    return buildTreeHelper(inorder, postorder, map, 0, inorder.size() - 1, 0, postorder.size() - 1);
}