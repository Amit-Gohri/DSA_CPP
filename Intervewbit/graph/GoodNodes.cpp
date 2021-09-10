// https://www.interviewbit.com/old/problems/path-with-good-nodes/

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> &A, vector<vector<int>> &adj, int C, vector<int> &visited, int cur, int goodCount, int &ans)
{
    visited[cur] = true;
    //check good or bad node
    // update the good count
    // check on limit
    // if in limit call rec else if limit exceded simply return do not do furthur dfs
    //Base case when to update the ans
    if (A[cur - 1] == 1)
    {
        if (goodCount >= C)
        {
            return;
        }

        else
        {
            goodCount++;
        }
    }

    
        if (adj[cur].size() == 1)
        {
            ans++;
        }

        else
        {
            for (int i = 0; i < adj[cur].size(); i++)
            {
                //if not visited
                if (!visited[adj[cur][i]])
                    dfs(A, adj, C, visited, adj[cur][i], goodCount, ans);
            }
        }
    
}

int solve(vector<int> &A, vector<vector<int>> &B, int C)
{
    // 1 based indexing
    vector<int> visited(A.size() + 1, false);
    vector<vector<int>> adj(A.size() + 1);
    int ans(0);
    for (int i = 0; i < B.size(); i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }
    dfs(A, adj, C, visited, 1, 0, ans);
    return ans;
}