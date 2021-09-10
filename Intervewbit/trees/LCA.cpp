//https://www.interviewbit.com/problems/least-common-ancestor/
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int search(TreeNode *A, int t, vector<int> &v)
{
    if (A == NULL)
    {
        return 0;
    }
    v.push_back(A->val);
    if (A->val == t)
    {
        return 1;
    }
    if (search(A->left,t,v) || search (A->right,t,v))
    {
        return 1;
    }
    else
    {
        v.pop_back();
        return 0;
    }
}

int LCA(TreeNode *A, int B, int C)
{
    vector<int> v1;
    vector<int> v2;
    //searchforB
    if (search(A, B, v1))
    {
        if (search(A, C, v2))
        {
            for (int i = v1.size()-1; i >=0 ; i--)
            {
                for (int j = v2.size()-1; j >=0 ; j--)
                {
                    if (v1[i] == v2[j])
                    {
                        return v1[i];
                    }
                    
                }
                
            }
            
            
        }
    }
    return -1;
}

int main(){
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout << LCA(root, 4, 6);
}

