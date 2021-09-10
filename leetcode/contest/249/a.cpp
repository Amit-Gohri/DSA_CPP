#include <bits/stdc++.h>
using namespace std;

//   Definition for a binary tree node.
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
    void leafNodes(TreeNode *root, vector<TreeNode *> &leafs)
    {
        if (root == nullptr)
        {
            return;
        }
        if (!(root->left and root->right))
        {
            leafs.push_back(root);
        }
        else
        {
            if (root->left)
                leafNodes(root->left, leafs);
            if (root->right)
                leafNodes(root->right, leafs);
        }
    }
    TreeNode *canMerge(vector<TreeNode *> &trees)
    {
        if (trees.size() == 1)
            return trees[0];
        unordered_map<TreeNode *, vector<TreeNode *>> map;
        for (auto i : trees)
        {
            vector<TreeNode *> leafs;
            leafNodes(i, leafs);
            map[i] = leafs;
        }

        for (auto i : map)
        {
            //loop on maps [i]

            for (int j = 0; j < i.second.size(); j++)
            {
                // if(map.find(map[i][j]->val != map.end())){
                //     //we found a match
                //     // merege  the trees
                for (auto k : map)
                {
                    if (k.first->val == i.second[j]->val)
                    {
                        //match found
                        //merge
                        i.second[j]->left = k.first->left;
                        i.second[j]->right = k.first->right;
                        map.erase(k.first);
                    }
                }
            }
        }
        for (auto l : map)
        {
            return l.first;
        }
    }
};