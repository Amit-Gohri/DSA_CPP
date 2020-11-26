//https://www.interviewbit.com/problems/bst-iterator/

#include<bits/stdc++.h>
using namespace std;

//Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> in;
stack<int> st;

void inorder(TreeNode * root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    in.push_back(root->val);
    inorder(root->right);
}

class BSTIterator{
    public:
        BSTIterator(TreeNode*);
        bool hasNext();
        int next();
};

BSTIterator::BSTIterator(TreeNode *root) {
    inorder(root);
    for (int i = in.size()-1; i > -1; i--)
    {
        st.push(in[i]);
    }
    
}


bool BSTIterator::hasNext() {
    if (st.empty())
    {
        return 0;
    }
    return 1;   
}


int BSTIterator::next() {
    if (in.size()==0)
    {
        
    }
    int a = st.top();
    st.pop();
    return a;
}


