//https://www.interviewbit.com/problems/regular-expression-match/

#include <bits/stdc++.h>
using namespace std;

int sol(string A, string B)
{
    // ? = char
    // * = seq
    vector<vector<int>> dp(A.size() + 1, vector<int>(B.size() + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i < A.size() + 1; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 1; i < B.size() + 1; i++)
    {
        //if b[i] normal return 0
        //if ? 0
        //retrurn pre
        if (B[i - 1] == '*')
        {
            dp[0][i] = dp[0][i - 1];
        }
        else
        {
            dp[0][i] = 0;
        }
    }

    for (int i = 1; i < A.size() + 1; i++)
    {
        for (int j = 1; j < B.size() + 1; j++)
        {
            if (A[i - 1] == B[j - 1])
            {
                if (A[i - 1] == '*')
                {
                    dp[i][j] = dp[i - 1][j - 1] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
            }
            else
            {
                if (B[j - 1] == '?')
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else if (B[j - 1] == '*')
                {
                    dp[i][j] = dp[i - 1][j - 1] || (dp[i - 1][j] || dp[i][j - 1]);
                }

                else dp[i][j] = 0;
            }   
        }
    }
    return dp[A.size()][B.size()];
}

int main()
{
    cout << sol("aab", "c*a*b");
}