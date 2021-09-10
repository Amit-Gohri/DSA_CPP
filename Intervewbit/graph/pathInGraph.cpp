// https://www.interviewbit.com/old/problems/path-in-directed-graph/

#include<bits/stdc++.h>
using namespace std;

bool pathHelper(vector<vector<int>> &adj, vector<int> &visited, int start, int end){
    if (start == end)
    {
        return true;
    }

    visited[start] = true;

    for (int i = 0; i < adj[start].size(); i++)
    {
        if(!visited[start] and pathHelper(adj, visited, adj[start][i], end)){
            return true;
        }
    }
    return false;
}

int path(int A, vector<vector<int>> B){
    vector<vector<int>> adj(A + 1);
    vector<int> visited(A + 1, false);
    //graph may not be connected
    // 1 index
    for (int i = 0; i < B.size(); i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
    }

    // implement pathHleper
    // for (int i = 1; i <= A; i++)
    // {
    //     if(!visited[i]){
    //         pathHelper(adj, visited, 1, A)
    //     }
    // }
    

    return pathHelper(adj, visited, 1, A);
}