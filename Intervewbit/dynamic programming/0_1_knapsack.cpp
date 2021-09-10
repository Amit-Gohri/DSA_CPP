#include<bits/stdc++.h>
using namespace std;

int rec(vector<int> &A, vector<int> &B, int C, vector<vector<int>> &dp, int N){
    //base condition
    if (C==0 || N == A.size())
    {
        return 0;
    }
    
    
    if (dp[N][C-1]!=-1)
    {
        return dp[N][C-1];
    }

    //able to choose the weight
    if (B[N] <= C)
    {
        dp[N][C-1] = max(A[N] + rec(A, B, C - B[N], dp, N + 1), rec(A, B, C, dp, N + 1));
    }
    
    else
    {
        dp[N][C-1] = rec(A, B, C, dp, N + 1);
    }

    return dp[N][C-1];
}

int knapsack(vector<int> A, vector<int> B, int C){
    vector<vector<int>> dp(A.size(), vector<int>(C, -1));
    return rec(A, B, C, dp, 0);
}


int main(){
    cout << knapsack({60, 100, 120}, {10, 20, 30}, 50);
}