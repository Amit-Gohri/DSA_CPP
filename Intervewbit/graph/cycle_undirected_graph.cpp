// https://www.interviewbit.com/problems/cycle-in-undirected-graph/
#include <bits/stdc++.h>
using namespace std;

int solve(int A, vector<vector<int>> &adj_list, vector<int> &visited, int crt_node, int parent_node)
{
    int possible(0);
    visited[crt_node] = 1;
    for (int i = 0; i < adj_list[crt_node].size(); i++)
    {
        if (visited[adj_list[crt_node][i]])
        {
            if (adj_list[crt_node][i] != parent_node)
            {
                return true;
            }
        }
        else
        {
            if (solve(A, adj_list, visited, adj_list[crt_node][i], crt_node))
            {
                possible = 1;
            }
        }
    }
    if (possible)
    {
        return true;
    }
    return false;
}

int cycle(int A, vector<vector<int>> B)
{
    vector<vector<int>> adj_list(A);
    for (int i = 0; i < B.size(); i++)
    {
        adj_list[B[i][0] - 1].push_back(B[i][1] - 1);
        adj_list[B[i][1] - 1].push_back(B[i][0] - 1);
    }
    for (int i = 0; i < A; i++)
    {
        vector<int> visited(A, 0);
        if (solve(A, adj_list, visited, i, -1))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    cout << cycle(5, {{1, 2}, {1, 2}, {2, 3}, {1, 4}, {4, 5}});
}