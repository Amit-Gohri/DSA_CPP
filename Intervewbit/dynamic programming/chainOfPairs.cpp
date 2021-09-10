// https://www.interviewbit.com/old/problems/chain-of-pairs/
#include <bits/stdc++.h>
using namespace std;

int chain(vector<vector<int>> A)
{
    //sort the list
    //initiate dp table
    //run for loop
    //return max element of dp table
    sort(A.begin(), A.end());
    vector<int> dp(A.size(), 1);
    for (int i = A.size() - 1; i >= 0; i--)
    {

        int second_value = A[i][1];
        for (int j = i; j < A.size(); j++)
        {
            if (A[j][0] > second_value)
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < A.size(); i++)
    {
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main(){
    cout<< chain({{5, 24}, {39, 60}, {15, 28}, {27, 40}, {50, 90}});
}