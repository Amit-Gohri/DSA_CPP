//  https://leetcode.com/problems/course-schedule-ii/solution/

#include <bits/stdc++.h>
using namespace std;

int isCycle(int numCourses, vector<vector<int>> &adj, vector<int> &visited, vector<int> &cycleVisit, int crt)
{
    // detect a cycle
    visited[crt] = true;
    cycleVisit[crt] = true;

    for (int i = 0; i < adj[crt].size(); i++)
    {
        if (!visited[adj[crt][i]])
        {
            if (isCycle(numCourses, adj, visited, cycleVisit, adj[crt][i]))
            {
                return true;
            }
            
        }

        else
        {
            if (cycleVisit[adj[crt][i]])
                return true;   
        }
        
        
    }

    cycleVisit[crt] = false;
    return false;
}

void dfs(int numCourses, vector<vector<int>> &adj, vector<int> &visited, int crt, stack<int> &revTopo)
{

    visited[crt] = true;

    for (int i = 0; i < adj[crt].size(); i++)
    {
        if (!visited[adj[crt][i]])
        {
            dfs(numCourses, adj, visited, adj[crt][i], revTopo);
        }
    }
    //after visiting all nodes
    revTopo.push(crt);
}

vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
{
    // [1,2]  2->1
    vector<vector<int>> adj(numCourses);
    vector<int> visited(numCourses, false);
    vector<int> visitedC(numCourses, false);
    vector<int> cycleVisit(numCourses, false);
    stack<int> revTopo;
    vector<int> topologicalOrder;
    for (int i = 0; i < prerequisites.size(); i++)
    {
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
    }

    // first detect the cycle in the graph
    // if cycle is present then return empty set
    // else return the topological order
    for (int i = 0; i < numCourses; i++)
    {
        if (!visitedC[i])
        {
            if(isCycle(numCourses, adj, visitedC,cycleVisit, i )){
                return topologicalOrder;
            }
        }
    }

    for (int i = 0; i < numCourses; i++)
    {
        if (!visited[i])
        {
            dfs(numCourses, adj, visited, i, revTopo);
        }
    }

    

    while (!revTopo.empty())
    {
        topologicalOrder.push_back(revTopo.top());
        revTopo.pop();
    }

    return topologicalOrder;
}