// https://www.interviewbit.com/problems/sum-root-to-leaf-numbers/
#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void rec(TreeNode* A, int &ans, int pre){
    if (A==NULL)
    {
        return;
    }
    pre = pre * 10 + A->val;
    pre = pre % 1003;

    if (A->left == NULL && A->right == NULL)
    {
        ans += pre;
        ans = ans%1003;
        return;
    }
    rec(A->left, ans, pre);
    rec(A->right, ans, pre);
}

int sum(TreeNode* A){

    int ans(0);
    int pre(0);
    rec(A, ans, pre);
    return ans;
}