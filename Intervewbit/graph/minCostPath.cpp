// https://www.interviewbit.com/old/problems/min-cost-path/
#include <bits/stdc++.h>
using namespace std;
//do stack solution
//check other solutions

void dijkstra(vector<string> &C, vector<vector<bool>> &visited, priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> &pq)
{
    //find min
    if (pq.empty())
    {
        return;
    }

    pair<int, pair<int, int>> curNode = pq.top();
    pq.pop();
    //mark visited
    visited[curNode.second.first][curNode.second.second] = true;
    //relax adjacent
    // if there are no adjacent then continue;
    vector<vector<int>> dir = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}};
    for (int i = 0; i < 4; i++)
    {
        int x = curNode.second.first + dir[i][0];
        int y = curNode.second.second + dir[i][1];
        if (x >= 0 and x < C.size() and y >= 0 and y < C[0].size())
        {
            //we are in range

            //relax the vertex of invisited nodes and push into the queue
        }
    }

    //call next
}

int minCostPath(int A, int B, vector<string> &C)
{
    // vector<vector<int>> cost()
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    // {min_wt, {x,y}}
    pq.push({0, {0, 0}});
    vector<vector<int>> weight(A, vector<int>(B, INT_MAX));
    vector<vector<bool>> visited(A, vector<bool>(B, false));
    weight[0][0] = 0;
    // weight
    // dijkstra(C, visited, pq);
    while (!pq.empty())
    {
        pair<int, pair<int, int>> curNode = pq.top();
        pq.pop();
        //mark visited
        if (!visited[curNode.second.first][curNode.second.second])
        {
            char allowedPath = C[curNode.second.first][curNode.second.second];
            visited[curNode.second.first][curNode.second.second] = true;
            //relax adjacent
            // if there are no adjacent then continue;
            vector<pair<char, pair<int, int>>> dir = {{'D', {1, 0}}, {'R', {0, 1}}, {'L', {0, -1}}, {'U', {-1, 0}}};
            //relax adjacent
            for (int j = 0; j < 4; j++)
            {
                int x = curNode.second.first + dir[j].second.first;
                int y = curNode.second.second + dir[j].second.second;
                if (x >= 0 and x < C.size() and y >= 0 and y < C[0].size())
                {
                    //we are in range
                    //check the char
                    if (!visited[x][y])
                    {
                        if (dir[j].first == allowedPath)
                        {
                            //cost to travel is 0
                            weight[x][y] = min(weight[curNode.second.first][curNode.second.second], weight[x][y]);
                        }
                        else
                        {
                            weight[x][y] = min(weight[curNode.second.first][curNode.second.second] + 1, weight[x][y]);
                        }
                        pq.push({weight[x][y], {x, y}});
                    }

                    //update the weight
                    //relax the vertex of invisited nodes and push into the queue
                }
            }
        }
    }

    return weight[A - 1][B - 1];
}

// we applied dijkstra here 
int minCostPath(vector<vector<int>> &grid)
{
    // vector<vector<int>> cost()
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    // {min_wt, {x,y}}
    pq.push({0, {0, 0}});
    vector<vector<int>> weight(grid.size(), vector<int>(grid[0].size(), INT_MAX));
    vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
    weight[0][0] = 0;
    // weight
    // dijkstra(C, visited, pq);
    while (!pq.empty())
    {
        pair<int, pair<int, int>> curNode = pq.top();
        pq.pop();
        if (!visited[curNode.second.first][curNode.second.second])
        {

            //mark visited
            char allowedPath;
            int allowed = grid[curNode.second.first][curNode.second.second];
            if (allowed == 1)
            {
                allowedPath = 'R';
            }
            else if (allowed == 2)
            {
                allowedPath = 'L';
            }
            else if (allowed == 3)
            {
                allowedPath = 'D';
            }
            else if (allowed == 4)
            {
                allowedPath = 'U';
            }

            visited[curNode.second.first][curNode.second.second] = true;
            //relax adjacent
            // if there are no adjacent then continue;
            vector<pair<char, pair<int, int>>> dir = {{'D', {1, 0}}, {'R', {0, 1}}, {'L', {0, -1}}, {'U', {-1, 0}}};
            //relax adjacent
            for (int j = 0; j < 4; j++)
            {
                int x = curNode.second.first + dir[j].second.first;
                int y = curNode.second.second + dir[j].second.second;
                if (x >= 0 and x < grid.size() and y >= 0 and y < grid[0].size())
                {
                    //we are in range
                    //check the char
                    if (!visited[x][y])
                    {
                        if (dir[j].first == allowedPath)
                        {
                            //cost to travel is 0
                            weight[x][y] = min(weight[curNode.second.first][curNode.second.second], weight[x][y]);
                        }
                        else
                        {
                            weight[x][y] = min(weight[curNode.second.first][curNode.second.second] + 1, weight[x][y]);
                        }
                        pq.push({weight[x][y], {x, y}});
                    }

                    //update the weight
                    //relax the vertex of invisited nodes and push into the queue
                }
            }
        }
    }

    return weight[grid.size() - 1][grid[0].size() - 1];
}

//not visiting all the nodes