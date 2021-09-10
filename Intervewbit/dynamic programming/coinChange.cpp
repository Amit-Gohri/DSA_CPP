//https://www.interviewbit.com/old/problems/coin-sum-infinite/

#include<bits/stdc++.h>
using namespace std;

// int rec(vector<int> &A, int B, vector<vector<int>> &dp, int N){
//     //base condition
//     if (B==0 )// sum == 0 
//     {
//         return 1;
//     }
//     if (N==-1) //no coins 
//     {
//         if (B==0)
//         {
//             return 1;
//         }
//         return 0;
//         }
    
    
//     if (dp[N][B-1] != -1)
//     {
//         return dp[N][B-1];
//     }

//     if (A[N]<=B)
//     {
//         dp[N][B-1] = rec(A, B - A[N], dp, N - 1) + rec(A, B, dp, N - 1);
//     }
//     else
//     {
//         return rec(A, B, dp, N - 1);
//     }
//     return dp[N][B-1];
// }

// int coinChange(vector<int> &A, int B){
//     vector<vector<int>> dp(A.size(), vector<int>(B, -1));
//     return rec(A, B, dp, A.size()-1);

// }
int coinChange(vector<int> &A, int B){
    vector<int> dp(B+1, 0);
    dp[0] = 1;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = A[i]; j < B; j++)
        {
            dp[j] = dp[j] + dp[j - A[i]];
        }
        
    }
    return dp[B];
}