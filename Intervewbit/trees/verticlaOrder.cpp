// https://www.interviewbit.com/old/problems/vertical-order-traversal-of-binary-tree/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<pair<int, int>> levelOrderTraversal(TreeNode *root)
{
    //using queue we pop the level from queue and pushes the next level
    queue<pair<TreeNode *, int>> q;
    vector<pair<int, int>> ans;
    if (root == NULL)
        return ans;
    q.push({root, 0});

    while (!q.empty())
    {
        //pop the q top
        // can we push NULL to q
        //
        // vector<int> single_level;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            pair<TreeNode *, int> cur = q.front();
            q.pop();
            ans.push_back({cur.first->val, cur.second});
            // single_level.push_back(cur->val);
            if (cur.first->left)
                q.push({cur.first->left, cur.second -1});
            if (cur.first->right)
                q.push({cur.first->right, cur.second+1});
        }
        // ans.push_back(single_level);
    }
    return ans;
}

vector<vector<int>> verticalOrder(TreeNode *A)
{
    //store horizontal level with level order
    vector<pair<int, int>> levelOrder = levelOrderTraversal(A);
    map<int, vector<int>> map;
    for (int i = 0; i < levelOrder.size(); i++)
    {
        map[levelOrder[i].second].push_back(levelOrder[i].first);
    }
    vector<vector<int>> ans;
    for(auto i: map){
        ans.push_back(i.second);
    }
    return ans;
}