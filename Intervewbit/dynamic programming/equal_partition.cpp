

#include <bits/stdc++.h>
using namespace std;

int equalPartition(vector<int> nums)
{
    int sum(0);
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    if (sum % 2 != 0)
    {
        return 0;
    }

    vector<vector<int>> dp(nums.size() + 1, vector<int>(sum + 1, 0));

    //fill the base values
    for (int i = 0; i <= nums.size(); i++)
    {
        dp[i][0] = 1;
    }
    
    // solve the dp

    for (int i = 1; i <= nums.size(); i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (nums[i-1] <= j)
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i-1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[nums.size()][sum / 2];   
}