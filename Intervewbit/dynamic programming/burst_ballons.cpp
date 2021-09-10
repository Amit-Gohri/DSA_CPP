// https://leetcode.com/problems/burst-balloons/
#include <bits/stdc++.h>
using namespace std;

int maxCoins(vector<int> &nums)
{
    nums.insert(nums.begin(), 1);
    nums.insert(nums.end(), 1);
    vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), 0));

    // base condition
    // 1--  i < j else dp[i][j] = 0
    // 2--
    int temp_ans(0);
    int max_coins(0);
    for (int i = 1; i < nums.size()-1; i++)
    {
        for (int j = i + 1; j < nums.size()-1; j++)
        {
            for (int k = i ; k <= j; k++)
            {
                int coin_gain = nums[k] * nums[i - 1] * nums[j - 1];
                int remaining = dp[i][k - 1] + dp[k + 1][j];
                dp[i][j] = max(dp[i][j], remaining + coin_gain);
            }
        }
    }
    return dp[1][nums.size() - 2];
}