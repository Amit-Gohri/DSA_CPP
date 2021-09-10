//https://www.interviewbit.com/problems/largest-distance-between-nodes-of-a-tree/
#include <bits/stdc++.h>
using namespace std;

int max_dist(vector<vector<int>> &adj, vector<int> visited, int crt)
{
    priority_queue<int> set;
    for (int i = 0; i < adj[crt].size(); i++)
    {

        if (visited[adj[crt][i]])
        {
            set.push(0);
        }
        else
        {
            visited[adj[crt][i]] = 1;
            set.push(max_dist(adj, visited, visited[adj[crt][i]]) + 1   );
        }
    }
    int a(0);
    if (!set.empty())
    {
        a = set.top();
        set.pop();
    }

    int b(0);
    if (!set.empty())
    {
        b = set.top();
    }
    return a + b;
}

int solve(vector<int> &A)
{
    vector<vector<int>> adj_list(A.size());
    vector<int> visited(A.size(), 0);
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == -1)
        {
            continue;
        }

        adj_list[i].push_back(A[i]);
        adj_list[A[i]].push_back(i);
    }
    return max_dist(adj_list, visited, 0);
}

//https://www.interviewbit.com/problems/largest-distance-between-nodes-of-a-tree/
#include <bits/stdc++.h>
using namespace std;

int max_dist(vector<vector<int>> &adj, vector<int> visited, int crt)
{
    priority_queue<int> set;
    if (visited[crt])
    {
        return 0;
    }
    visited[crt] = 1;

    for (int i = 0; i < adj[crt].size(); i++)
    {

        set.push(max_dist(adj, visited, adj[crt][i]) + 1);
    }
    int a(0);
    if (!set.empty())
    {
        a = set.top();
        set.pop();
    }

    int b(0);
    if (!set.empty())
    {
        b = set.top();
    }
    return a + b;
}

int solve(vector<int> &A)
{
    vector<vector<int>> adj_list(A.size());
    vector<int> visited(A.size(), 0);
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == -1)
        {
            continue;
        }

        adj_list[i].push_back(A[i]);
        adj_list[A[i]].push_back(i);
    }
    return max_dist(adj_list, visited, 0);
}

//https://www.interviewbit.com/problems/largest-distance-between-nodes-of-a-tree/
#include <bits/stdc++.h>
using namespace std;

int diameter(vector<int> &A)
{
    vector<vector<int>> adj(A.size());
    vector<int> visited(A.size(), false);

    
}