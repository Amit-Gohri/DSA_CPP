// https://www.interviewbit.com/old/problems/egg-drop-problem/
#include <bits/stdc++.h>
using namespace std;

int helper(vector<vector<int>> &dp, int eggs, int floors){
    //return min 
    //include base cases
    if(eggs == 0 || floors == 0)
        return 0;
    if(floors ==1) return 1;
    
    if(eggs ==1) return floors;
    

    if(dp[eggs][floors]!=INT_MAX)
        return dp[eggs][floors];
    else
    {
        for (int i = 1; i <= floors; i++)
        {
            //drop egg on ith floor
            //case 1 if egg breaks
            int below = helper(dp, eggs - 1, i - 1);
            //case 2 if do not break
            int above = helper(dp, eggs, floors - i);
            dp[eggs][floors] = min(dp[eggs][floors], max(above, below)+1);
        }
        return dp[eggs][floors];
    }
    
}


int mindrops(int A, int B)
{
    vector<vector<int>> dp(A + 1, vector<int>(B + 1, -1));
    return helper(dp, A, B);
}

//TLE 