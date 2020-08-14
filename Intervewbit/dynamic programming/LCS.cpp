//https://www.interviewbit.com/problems/longest-common-subsequence/

#include <bits/stdc++.h>
using namespace std;

int lcs(string A, string B, vector<vector<int>>& dp)
{
    for (int i = A.size()-1; i >= 0; i--)
    {
        for (int j = B.size()-1; j >= 0; j--)
        {
            if (A[i] == B[j])
            {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            }
            else
            {

                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    return dp[0][0];
}

int longestCommonSubsequence(string A, string B)
{
    vector<vector<int>> dp(A.size() + 1, vector<int>(B.size() + 1, -1));
    int n(A.size() - 1), m(B.size() - 1);
    for (int i = 0; i < A.size() + 1; i++)
    {
        dp[i][B.size()] = 0;
    }
    for (int i = 0; i < B.size() + 1; i++)
    {
        dp[A.size()][i] = 0;
    }
    return lcs(A, B, dp);
}

int main()
{
    cout << longestCommonSubsequence("abcdefghij", "ecdgi");
}
    