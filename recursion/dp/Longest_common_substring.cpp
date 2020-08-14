//https://www.geeksforgeeks.org/longest-common-substring-dp-29/

#include<bits/stdc++.h>
using namespace std;

int rec(string A, string B, int n, int m, int len)
{
    int lcs2(0);
    int lcs3(0);
    int lcs1(0);
    if (n == A.size() || m == A.size())
    {
        return len;
    }
    else
    {
        lcs1 = len;
        if (A[n] == B[m])
        {
            lcs1 = rec(A, B, n+1, m+1, len+1);
        }
        lcs2 = rec(A, B, n+1, m, 0);
        lcs3 = rec(A, B, n, m+1, 0);


    }
    return max(lcs1, max(lcs2, lcs3));
}

int LC_substring(string A, string B)
{
    return rec(A, B, 0, 0, 0);
}

int main()
{
    cout<< LC_substring("abcde", "a");
}