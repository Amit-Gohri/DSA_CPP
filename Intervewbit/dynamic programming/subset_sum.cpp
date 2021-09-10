// https://www.interviewbit.com/old/problems/subset-sum-problem/

#include <bits/stdc++.h>
using namespace std;

int subsetSum(vector<int> A, int B)
{
    vector<vector<int>> dp(A.size() + 1, vector<int>(B + 1, 0));
    int sum(B);

    // for (int i = 1; i <= A.size(); i++)
    // {
    //     if (A[i - 1] <= sum)
    //     {
    //         //we can add the current element in the
    //         if (A[i - 1] == sum)
    //         {
    //             dp[i]
    //         }

    //         dp[i][sum] = dp[i - 1][sum - A[i - 1]] || dp[i - 1][sum];
    //     }
    //     else
    //     {
    //         dp[i][sum] = dp[i - 1][sum];
    //     }
    // }


    for (int i = 0; i <= A.size(); i++)
    {
        dp[i][0] = true;
    }
    
    for (int i = 1; i <= A.size(); i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (A[i - 1] <= j)
            {

                dp[i][j] = dp[i - 1][j - A[i - 1]] || dp[i - 1][j];
            }

            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[A.size()][sum];
}