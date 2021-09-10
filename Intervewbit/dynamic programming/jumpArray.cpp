// https://www.interviewbit.com/old/problems/jump-game-array/
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> A){
    vector<int> dp(A.size(), 0);
    for (int i = A.size()-1; i >=0; i--)
    {
        bool flag = 0;
        for (int j = 1; j <= A[i]; j++)
        {
            if (i+j >= A.size() -1)
            {
                flag = 1;
            }
            
            else
            {
                if (dp[i+j] == 1)
                {
                    flag = 1;
                }
                
            }
            
        }
        if (flag)
        {
            dp[i] = 1;
        }
        
        
    }
    return dp[0];
}