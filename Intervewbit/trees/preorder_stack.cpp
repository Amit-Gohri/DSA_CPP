//

#include <bits/stdc++.h>
using namespace std;
void pv(vector<int> A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> preorder(TreeNode *A)
{
    vector<int> traversal;
    TreeNode *temp = NULL;
    stack<TreeNode *> s;
    if (A == NULL)
    {
        return traversal;
    }
    s.push(A);
    while (!s.empty())
    {
        traversal.push_back(s.top()->val);
        temp = s.top();
        s.pop();
        if (temp->right)
        {
            s.push(temp->right);
        }
        if (temp->left)
        {
            s.push(temp->left);
        }
    }
}

int main()
{
    pv(preorder(NULL));
}