//https://www.interviewbit.com/problems/longest-palindromic-subsequence/

#include<bits/stdc++.h>
using namespace std;

// int rec(string A, int n, int m)
// {
//     if (n == m)
//     {
//         return 1;
//     }
//     else if (n > m)
//     {
//         return 0;
//     }
//     else
//     {
//         if (A[n] == A[m])
//         {
//             return 2 + rec(A, n + 1, m - 1);
//         }
//         else
//         {
//             return max(rec(A, n + 1, m), rec(A, n, m - 1));
//         }
//     }
// }

// int LPS(string A)
// {
//     return rec(A, 0, A.size() - 1);
// }

// int main() {
//     cout << LPS("GEEKSFORGEEKS");
// }

//

int rec(string A, vector<vector<int>>& dp)
{
    for (int j = 1; j < A.size(); j++)
    {
        int x = j;
        for (int i = 0; i < A.size() - j; i++)
        {
            if (A[i] == A[x])
            {
                dp[i][x] = 2 + dp[i + 1][x - 1];
            }
            else
            {
                dp[i][x] = max(dp[i + 1][x], dp[i][x - 1]);
            }
            x++;
        }

    }
    return dp[0][A.size() - 1];
}

int LPS(string A)
{
    vector<vector<int>> dp{ A.size(), vector<int>(A.size(),-1) };
    //initialise the matrix
    for (int i = 0; i < A.size(); i++)
    {
        dp[i][i] = 1;
    }
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            dp[i][j] = 0;
        }
    }


    return rec(A, dp);
}

int main() {
    cout << LPS("GEEKSFORGEEKS");
}