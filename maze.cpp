#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

void backtrack(vector<vector<char>>& maze, priority_queue <int, vector<int>, greater<int> > &pq, int i, int j, int walls_broken, int time)
{
    if (maze[i][j] == 'G')
    {
        pq.push(time);
    }
    else
    {
        if (i < maze.size() - 1)
        {
            if (maze[i + 1][j] == '.' || maze[i + 1][j] == 'G')
            {
                backtrack(maze, pq, i + 1, j, walls_broken, time + 1);
            }
            else if (maze[i + 1][j] == '#')
            {
                backtrack(maze, pq, i + 1, j, walls_broken + 1, walls_broken + time + 1);
            }
        }
        if (j < maze[0].size() - 1)
        {
            if (maze[i][j + 1] == '.' || maze[i][j + 1] == 'G')
            {
                backtrack(maze, pq, i, j + 1, walls_broken, time + 1);
            }
            else if (maze[i + 1][j] == '#')
            {
                backtrack(maze, pq, i, j + 1, walls_broken + 1, walls_broken + time + 1);
            }
        }

    }
    
}

int main()
{
    priority_queue<int, vector<int>, greater<int>> ans;
    int m, n;
    cin >> m >> n;
    vector<vector<char>> maze(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
        }
    }
    backtrack(maze, ans, 0, 0, 0, 0);
    cout << ans.top();
}