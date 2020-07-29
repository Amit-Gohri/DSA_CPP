//https://www.interviewbit.com/problems/edit-distance/

#include <bits/stdc++.h>
using namespace std;
// #define min(a, b) a < b ? a : b
// #define max(a, b) a > b ? a : b
int dp[450][450];
int min(int x, int y, int z)
{
    return min(min(x, y), z);
}

int rec(string A, string B, int n, int m)
{
    if (n == A.size() || m == B.size())
    {
        int diff = n - A.size() - m + B.size();
        if (diff == 0)
        {
            dp[n][m] = 0;
        }
        else
        {
            dp[n][m] = abs(diff);
        }
    }
    else
    {
        if (dp[n][m] == -1)
        {
            if (A[n] == B[m])
            {

                dp[n][m] = rec(A, B, n + 1, m + 1);
            }
            else
            {
                //int a = min();
                dp[n][m] = 1 + min(rec(A, B, n, m + 1), rec(A, B, n + 1, m), rec(A, B, n + 1, m + 1));
            }
        }
    }
    return dp[n][m];
}

int minstep(string A, string B)
{

    //initialise the array
    return rec(A, B, 0, 0);
}

int main()
{
    
    cout << minstep("a", "n");
}