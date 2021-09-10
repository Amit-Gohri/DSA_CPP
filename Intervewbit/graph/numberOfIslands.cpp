// https://leetcode.com/problems/number-of-islands/

#include <bits/stdc++.h>
using namespace std;

void islandDFS(vector<vector<char>> &grid, int r, int c, vector<vector<bool>> &visited)
{
    visited[r][c] = true;

    //traverse in 8 directions
    vector<vector<int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

    for (int i = 0; i < 8; i++)
    {
        int new_r = directions[i][0] + r;
        int new_c = directions[i][1] + c;
        if (new_r >= 0 && new_r < grid.size() && new_c >= 0 && new_c < grid[0].size())
        {
            //new cordinates are inside the grid
            if (grid[new_r][new_c] == '1' and !visited[new_r][new_c])
            {
                islandDFS(grid, new_r, new_c, visited);
            }
        }
    }
}

int islands(vector<vector<char>> &grid)
{

    vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
    int islandsnum(0);
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (!visited[i][j] && grid[i][j] == '1')
            {
                //call dfs

                islandDFS(grid, i, j, visited);
                islandsnum++;
            }
        }
    }
    return islandsnum;
}