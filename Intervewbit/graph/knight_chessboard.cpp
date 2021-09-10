// https://www.interviewbit.com/problems/knight-on-chess-board/
#include <bits/stdc++.h>
using namespace std;

pair<int, int> dfs(int A, int B, int C, int D, int E, int F, int ans, vector<vector<int>> &visited)
{
    pair<int, int> p = {C, D};
    
    pair<int, int> start = {1, 1}, end = {A, B};
    pair<int, int> target = {E, F};
    //check current position
    if (p.first >= start.first && p.second >= start.second && p.first <= end.first && p.second <= end.second)
    {
        if(!visited[C - 1][D - 1])
        {
            visited[C - 1][D - 1] = 1;
            if (p == target)
            {
                return {1, ans};
            }
            else
            {
                if (dfs(A, B, C + 2, D + 1, E, F, ans + 1, visited).first ||
                    dfs(A, B, C + 2, D - 1, E, F, ans + 1, visited).first ||
                    dfs(A, B, C - 2, D + 1, E, F, ans + 1, visited).first ||
                    dfs(A, B, C - 2, D - 1, E, F, ans + 1, visited).first ||
                    dfs(A, B, C + 1, D + 2, E, F, ans + 1, visited).first ||
                    dfs(A, B, C + 1, D - 2, E, F, ans + 1, visited).first ||
                    dfs(A, B, C - 1, D + 2, E, F, ans + 1, visited).first ||
                    dfs(A, B, C - 1, D - 2, E, F, ans + 1, visited).first)
                {
                    return {1, ans + 1};
                }
            }
        }
    }   
    else
        return {0, 0};
}

int knight(int A, int B, int C, int D, int E, int F)
{
    //queue<pair<int, int>> q;
    vector<vector<int>> visited(A, vector<int>(B, 0));
    visited[C - 1][D - 1] = 1;
    return dfs(A, B, C, D, E, F, 0, visited).second;
    // while (!q.empty())
    // {
    //     p = q.front();
    //     q.pop();
    //     p1 = {p.first + 2, p.second + 1};
    //     p2 = {p.first - 2, p.second - 1};
    //     p3 = {p.first + 2, p.second - 1};
    //     p4 = {p.first - 2, p.second + 1};
    //     p5 = {p.first + 1, p.second + 2};
    //     p6 = {p.first - 1, p.second - 2};
    //     p7 = {p.first + 1, p.second - 2};
    //     p8 = {p.first - 1, p.second + 2};
    //     for (int i = 0; i < 8; i++)
    //     {
    //         if (p1 >= {1,1} && p1 <= {A,B})
    //         {

    //         }

    //     }

    // }
}