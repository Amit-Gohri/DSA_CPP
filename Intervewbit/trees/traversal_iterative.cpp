

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> pre(TreeNode *root)
{
    stack<TreeNode *> s;
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    s.push(root);

    while (!s.empty())
    {
        ans.push_back(s.top()->val);
        TreeNode *temp = s.top();
        s.pop();
        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);
    }
}

vector<int> in(TreeNode *root)
{
    stack<TreeNode *> s;
    vector<int> ans;
    TreeNode *crt = NULL;
    if (root == NULL)
    {
        return ans;
    }
    s.push(root);
    crt = root->left;
    while (1)
    {

        while (crt == NULL)
        {
            if (crt == NULL && s.empty())
                return ans;
            crt = s.top()->right;
            ans.push_back(s.top()->val);
            s.pop();
        }

        if (crt->left)
        {
            s.push(crt);
            crt = crt->left;
        }
        else
        {
            ans.push_back(crt->val);
            crt = crt->right;
        }
    }
    return ans;
}

vector<int> post(TreeNode *root)
{
    stack<TreeNode *> s;
    vector<int> ans;
    TreeNode *crt;
    if (root == NULL)
    {
        return ans;
    }
    crt = root;
    while (1)
    {
        if (crt->left != NULL)
        {
            s.push(crt);
            crt = crt->left;
        }
        else
        {
            s.push(crt);
            crt = crt->right;
            if (crt == NULL)
            {
                //ans.push_back(crt->val);
                while (!s.empty() && crt == s.top()->right)
                {

                    ans.push_back(crt->val);
                    crt = s.top();
                    s.pop();
                }
                if (s.empty())
                {
                    ans.push_back(crt->val);
                    return ans;
                }
                crt = s.top()->right;
            }
        }
    }
}