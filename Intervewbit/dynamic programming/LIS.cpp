//https://www.interviewbit.com/problems/longest-increasing-subsequence/

#include <bits/stdc++.h>
using namespace std;

int LIS(vector<int> A)
{
    int size = A.size();
    if (size == 0)
    {
        return 0;
    }
    
    int l(1),ans(0);
    vector<int> dp(size,1);            
    for (int i = 1; i < size; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (A[i]>A[j])
            {
                l = max(l, dp[j]+1);
            }
            
            
        }
        dp[i] = l;
        l = 1;
    }
    for (int i = 0; i < size; i++)
    {
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main()
{
    cout << LIS({5, 8, 7, 1, 5});
}