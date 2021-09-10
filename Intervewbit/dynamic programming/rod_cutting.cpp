// https://www.interviewbit.com/old/problems/rod-cutting/

#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>& B, int& A, vector<vector<int>>& dp, int i, int j)
{
    if (i == j)
    {
        return 0;
    }
    if (dp[i][j] > -1)
    {
        return dp[i][j];
    }

    else
    {
        int k(0);
        // correct
        for (k = 0; k < B.size(); k++)
        {
            if (B[k] > i)
            {

                break;
            }
        }
        int l(0);
        for (l = 0; l < B.size(); l++)
        {
            if (B[l] > j)
            {

                break;
            }
        }
        if (l != 0)
        {
            l--;
        }
        if (k != 0)
        {
            k--;
        }

        if (k >= l) {
            return j - i;
        }
        for (int m = k; m <= l; m++)
        {
            // dp[i][j] = min(dp[i][B[m]] + j - i, dp[i][j]);
            dp[i][j] = min(rec(B, A, dp, i, B[m]) + j - i + rec(B, A, dp, B[m], j), dp[i][j]);
        }

    }
    return dp[i][j];
}


int rodCutting(vector<int> B, int A)
{
    vector<vector<int>> dp(A + 1, vector<int>(A + 1, -1));
    sort(B.begin(), B.end());
    // for (int i = 0; i <= A; i++)
    // {
    //     dp[i][i] = 0;
    // }
    return rec(B, A, dp, 0, A);
}

int main() {
    cout << rodCutting({ 1,2,5 }, 6);
}


//how to maintain the vector of cuts