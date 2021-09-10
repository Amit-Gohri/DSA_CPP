#include <bits/stdc++.h>
using namespace std;

int LIS(vector<int> &nums)
{
    vector<int> dp(nums.size(), 0);
    dp[nums.size() - 1] = 1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        for (int j = i + 1; j < nums.size(); j++)       
        {
            if (nums[i] < nums[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int result(0);
    for (int i = 0; i < nums.size(); i++)
    {
        result = max(result, dp[i]);
    }
    return result;
}
