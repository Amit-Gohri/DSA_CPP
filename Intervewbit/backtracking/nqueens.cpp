// https://www.interviewbit.com/problems/nqueens/
#include <bits/stdc++.h>
using namespace std;

int isSafe(vector<string> sol, int row, int col, int n)
{
    for (int i = 0; i < row; i++)
    {
        if (sol[i][col] == 'Q')
        {
            return 0;
        }
    }
    for (int i = 0; i < col; i++)
    {
        if (sol[row][i] == 'Q')
        {
            return 0;
        }
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (sol[i][j] == 'Q')
        {
            return 0;
        }

    }

    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (sol[i][j] == 'Q')
        {
            return 0;
        }
    }
    return 1;
}

void solve(vector<vector<string>>& ans, vector<string> sol, int row, int n, int count)
{
    if (row == n)
    {
        if (count == n)
            ans.push_back(sol);
    }
    else
    {
        for (int col = 0; col < n; col++)
        {
            if (isSafe(sol, row, col, n) == 1)
            {
                //place queen
                sol[row][col] = 'Q';
                // increase count
                
                //solve ahead
                solve(ans, sol, row + 1, n, count + 1);
                //backtrack
                sol[row][col] = '.';
            }
        }
    }
}

vector<vector<string>> nqueen(int n)
{
    vector<vector<string>> ans;
    vector<string> sol(n, string(n, '.'));
    int row(0);
    solve(ans, sol, row, n, 0);
    return ans;
}

int main() {
    vector<vector<string>> ans = nqueen(4);
    cout << "hello";
}