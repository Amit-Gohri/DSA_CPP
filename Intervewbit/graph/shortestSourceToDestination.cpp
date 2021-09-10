// https://www.interviewbit.com/old/problems/word-ladder-i/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y)
    {
        //dijkstra algorithm
        //visited, weight, pq,
        vector<vector<int>> visited(N, vector<int>(M, false));
        vector<vector<int>> weight(N, vector<int>(M, INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        weight[0][0] = 0;
        pq.push({0, {0, 0}});

        while (!pq.empty())
        {
            pair<int, pair<int, int>> cur = pq.top();
            pq.pop();
            if (!visited[cur.second.first][cur.second.second])
            {
                //update the weight and push to the pq
                visited[cur.second.first][cur.second.second] = true;
                if (A[cur.second.first][cur.second.second] == 1)
                {
                    //move to adjacent cells
                    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {-1, 0}};
                    for (int i = 0; i < 4; i++)
                    {
                        int x = cur.second.first + dir[i].first;
                        int y = cur.second.second + dir[i].second;
                        if (x >= 0 and x < N and y >= 0 and y < M)
                        {
                            //if it is in range
                            if (!visited[x][y])
                            {
                                weight[x][y] = min(1 + weight[cur.second.first][cur.second.second], weight[x][y]);
                                pq.push({weight[x][y], {x, y}});
                            }
                        }
                    }
                }
            }
        }
        if (weight[X][Y] == INT_MAX)
        {
            return -1;
        };
        return weight[X][Y];
    }
};