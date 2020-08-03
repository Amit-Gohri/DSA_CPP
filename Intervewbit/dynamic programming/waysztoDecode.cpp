    //https://www.interviewbit.com/problems/ways-to-decode/

#include <bits/stdc++.h>
using namespace std;

long long rec(string A, int n)
{
    if (n >= A.size())
    {
        return 1;
    }
    else if (A[n] == '0')
    {
        return 0;
    }

    else
    {
        // if (A[n] == '1' && n < A.size() - 1)
        // {
        //     if (A[n+1] == '0')
        //     {
        //         return rec(A, n + 2);
        //     }

        //     else return 2 + rec(A, n + 2);
        // }
        // else if (A[n] == '2' && n < A.size() - 1 && (A[n + 1] == '0' || A[n + 1] == '1' || A[n + 1] == '2' || A[n + 1] == '3' || A[n + 1] == '4' || A[n + 1] == '5' || A[n + 1] == '6'))
        // {
        //     if (A[n+1] == 0)
        //     {
        //         return rec(A, n + 2);
        //     }

        //     else return 2 + rec(A, n + 2);
        // }
        // else
        // {
        //     return rec(A, n + 1);
        // }
        if (A[n] == '1' || (A[n] == '2' && A[n + 1] < '7'))
        {
            return rec(A, n + 1) + rec(A, n + 2);
        }
        else
        {
            return rec(A, n + 1);
        }
    }
}

int dp(string A)
{
    vector<int> t(A.size() + 1, 1);
    // if (A[A.size()-1] == '0')
    // {
    //     t[A.size()-1] = 0;
    // }
    for (int i = A.size(); i > -1; i--)
    {
        if (i == A.size())
        {
            t[i] == 1;
        }
        else
        {
            if ((A[i] == '1' || (A[i] == '2' && A[i + 1] < '7')) && i < A.size() - 1)
            {
                t[i] = t[i + 1] + t[i + 2];
            }
            else if (A[i] == '0')
            {
                t[i] = 0;
            }
            else
            {
                t[i] = t[i + 1];
            }
        }
    }
    return t[0];
}

int dec(string A)
{
    long long ans = rec(A, 0);
    if (ans == 0)
    {
        return 1;
    }

    else
        return (int)(ans % 1000000007);
}

int main()
{
    cout << dp("1");
}   