//https://www.interviewbit.com/problems/repeating-subsequence/

#include <bits/stdc++.h>
using namespace std;

// int _max(int x, int y, int z)
// {
//     return max(max(x, y), z);
// }

int sol(string A)
{
    vector<vector<int>> dp(A.size() + 1, vector<int>(A.size() + 1, 0));
    int lcs1(0), lcs2(0), lcs3(0);

    for (int i = 1; i <= A.size(); i++)
    {
        for (int j = 1; j <= A.size(); j++)
        {

            if (A[i - 1] == A[j - 1] && i != j)
            {
                lcs1 = dp[i - 1][j - 1] + 1;
                lcs2 = dp[i][j - 1];
                lcs3 = dp[i - 1][j];
                dp[i][j] = max(lcs1, max(lcs2, lcs3));
            }
            else
            {
                lcs2 = dp[i][j - 1];
                lcs3 = dp[i - 1][j];
                dp[i][j] = max(INT_MIN, max(lcs2, lcs3));
            }
        }
    }
    if (dp[A.size()][A.size()] >= 2)
        return 1;
    return 0;
}

int main()
{
    cout << sol("abab");
}