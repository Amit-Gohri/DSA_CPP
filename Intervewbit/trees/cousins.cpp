// https://www.interviewbit.com/old/problems/cousins-in-binary-tree/
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> cousins(TreeNode* A, int B){
    //levelorder traversal
    queue<pair<TreeNode*, int>> q;
    if (A)
    {
        q.push({A, 0});
    }
    while (!q.empty())
    {
        //if level is same

        //if level is different
        
    }
    
    
}