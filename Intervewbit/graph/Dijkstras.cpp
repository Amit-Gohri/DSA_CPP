// https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

#include <bits/stdc++.h>
using namespace std;

void dijkstraHelper(int V, vector<vector<int>> adj[], int S, vector<int> &visited, vector<int> &cost, int cur){
    visited[cur] = true;

    for (int i = 0; i < adj[cur].size(); i++)
    {
        // cost[adj[cur][[i]]] = min(cost[cur], adj[cur][i][0]+cost[cur])
    }
    
}

vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    //3d vector
    //implement dijkstra
    //from source node do  visit to all its unvisited adjacent nodes update the cost array
    //then call dijkstra from the adjacent nodes
    vector<int> visited(V, false);
    vector<int> cost(V, INT_MAX);
    int cur(0);
    dijkstraHelper(V, adj, S, visited, cost, cur);
}