//https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-ii/

#include <bits/stdc++.h>
using namespace std;

int rec(vector<int> &A, int n)
{
    if (n == A.size())
    {
        return 0;
    }
    else
    {
        if (A[n + 1] > A[n])
        {
            return A[n + 1] - A[n] + rec(A, n + 1);
        }
        else
        {
            return rec(A, n + 1);
        }
    }
}

int sol(vector<int> A)
{
    vector<int> dp(A.size(), -1);
    return rec(A, 0);
}

int dp(vector<int> A)
{
    vector<int> dp(A.size(), -1);

    for (int i = A.size() - 1; i > -1; i--)
    {
        if (i == A.size() - 1)
        {
            dp[i] = 0;
        }
        else
        {
            if (A[i + 1] > A[i])
            {
                dp[i] = dp[i + 1] + A[i + 1] - A[i];
            }
            else
            {
                dp[i] = dp[i + 1];
            }
        }
    }
    return dp[0];
}

int main()
{
    cout << dp({1, 4, 2, 5, 6, 3});
}