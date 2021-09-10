

#include <bits/stdc++.h>
using namespace std;

// int minJumps(vector<int> &A)
// {
//     vector<int> dp(A.size(), INT_MAX);
//     for (int i = A.size() - 1; i >= 0; i--)
//     {
//         if (i == A.size() - 1)
//         {
//             dp[i] = 0;
//         }

//         else
//         {
//             if (A[i] + i >= A.size() - 1)
//             {
//                 dp[i] = 1;
//             }
//             else
//             {
//                 for (int j = 1; j <= A[i]; j++)
//                 {
//                     dp[i] = min(dp[i], dp[i + j]);
//                 }
//                 if (dp[i] != INT_MAX)
//                 {
//                     dp[i]++;
//                 }
//             }
//         }
//     }
//     if (dp[0] == INT_MAX)
//     {
//         return -1;
//     }

//     return dp[0];
// }

// greedy approach

int minJumps(vector<int> &A)
{
    int index = 0;
    int next_index(0);
    int jump(0);

    //  1 handle edge case when not able to jump to reach end of the array
    //  2
    while (index < A.size() - 1)
    {
        next_index = index;
        for (int i = 1; i <= A[i]; i++)
        {
            if (index + i == A.size() - 1)
            {
                jump++;
                return jump;
            }

            if (A[index + i] + i > A[next_index] + next_index)
            {
                next_index = index + i;
            }
        }
        if (index == next_index)
        {
            return -1;
        }

        index = next_index;
        if (A[index] == 0)
        {
            return -1;
        }

        jump++;
    }
    return jump;

    // while (index < A.size())
    // {
    //     int t = 0;
    //     int next_index = 0;
    //     // pair<int, int> next = {0,0};
    //     for (int i = 1; i <= A[index]; i++)
    //     {
    //         //max

    //         if (i>=A.size())
    //         {

    //         }

    //         if (i == 1)
    //         {
    //             next_index = index + i;
    //         }
    //         else
    //         {
    //             if (A[index + i] + t > A[next_index])
    //             {
    //                 next_index = index + i;
    //             }
    //         }

    //         t++;
    //     }
    // }
}

int minJumps(vector<int> &A)
{
    int index = 0;

    int jump(0);

    //  1 handle edge case when not able to jump to reach end of the array
    //  2
    while (index < A.size() - 1)
    {
        int next_index(0);
        int next_value(INT_MIN);
        for (int i = 1; i <= A[index]; i++)
        {
            if (index + i < A.size() - 1)
            {
                if (next_value + next_index < A[i + index] + i)
                {
                    next_value = A[i + index];
                    next_index = i + index;
                }
            }
            else
            {
                next_index = A.size() - 1;
                break;
            }
        }
        if (index == next_index)
        {
            return -1;
        }

        index = next_index;
        if (A[index] == 0 && index < A.size() - 1)
        {
            return -1;
        }

        jump++;
    }
    return jump;
}

int minJumps(vector<int> &A)
{
    vector<int> dp(A.size(), INT_MAX);
    dp[A.size() - 1] = 0;
    int idx = A.size() - 1;
    //return min jumps
    for (int i = A.size() - 2; i >= 0; i--)
    {
        for (int j = A[i]; j>0;j--)
        {
            if (i+j<A.size() and dp[i+j] != INT_MAX)
            {
                dp[i] = min(dp[i+j] + 1, dp[i]);
                
                
            }
            
            
        }
        
        
        
    }
    if(dp[0] == INT_MAX)
        return -1;
    return dp[0];
}