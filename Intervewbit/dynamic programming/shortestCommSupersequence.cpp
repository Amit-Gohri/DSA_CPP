// https://leetcode.com/problems/shortest-common-supersequence/

#include <bits/stdc++.h>
using namespace std;

string solve(string A, string B)
{
    vector<vector<int>> dp(A.size() + 1, vector<int>(B.size() + 1, 0));

    //fill the base case
    for (int i = 1; i <= A.size(); i++)
    {
        for (int j = 1; j < B.size(); j++)
        {
            if (A[i - 1] == B[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int lcs = dp[A.size()][B.size()];
}