//https://www.interviewbit.com/problems/interleaving-strings/

#include <bits/stdc++.h>
using namespace std;

int interleaving(string A, string B, string C, int i, int j, int k)
{
    if (i == A.size() && j == B.size() && k == C.size())
    {
        return 1;
    }
    else if (k != C.size() && (i == A.size() && j == B.size()))
    {
        return 0;
    }

    if (A[i] == C[k] && B[j] == C[k])
    {
        // all are equal
        return (interleaving(A, B, C, i + 1, j, k + 1) || interleaving(A, B, C, i, j + 1, k + 1));
    }
    else if (A[i] == C[k] || B[j] == C[k])
    {
        if (A[i] == C[k])
        {
            return interleaving(A, B, C, i + 1, j, k + 1);
        }
        return interleaving(A, B, C, i, j + 1, k + 1);
    }
    else
    {
        //not match
        return 0;
    }
}

bool dp_sol(string A, string B, string C)
{
    if (C.size() != A.size() + B.size())
    {
        return 0;
    }
    vector<vector<bool>> dp(A.size() + 1, vector<bool>(B.size() + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i < A.size() + 1; i++)
    {
        if (A[i - 1] == C[i - 1])
        {
            dp[i][0] = dp[i - 1][0];
        }
    }
    for (int i = 1; i < B.size() + 1; i++)
    {
        if (B[i - 1] == C[i - 1])
        {
            dp[0][i] = dp[0][i - 1];
        }
    }
    for (int i = 1; i < A.size() + 1; i++)
    {
        for (int j = 1; j < B.size() + 1; j++)
        {
            if (A[i - 1] == C[i + j - 1] && B[j - 1] == C[i + j - 1])
            {
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
            }
            else if (A[i - 1] == C[i + j - 1] || B[j - 1] == C[i + j - 1])
            {
                if (A[i - 1] == C[i + j - 1])
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i][j - 1];
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return dp[A.size()][B.size()];
}

int main()
{
    cout << dp_sol("aabcc", "dbbca", "aadbbcbcac");
}