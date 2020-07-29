//https://www.interviewbit.com/problems/longest-common-subsequence/

#include<bits/stdc++.h>
using namespace std;

int lcs(string A, string B, int n, int m, vector<vector<int>> &dp)
{
    if(n==A.size() || m==B.size())
    {
        return 0;
    }
    else
    {
        if (A[n] == B[m])
        {
            return 1 + lcs(A, B, n + 1, m + 1, dp);
        }
        else
        {
            return max(lcs(A, B, n + 1, m, dp), lcs(A, B, n, m + 1, dp));
        }
    }
    
}

int longestCommonSubsequence(string A,string B)
{
    vector<vector<int>> dp(A.size()+1, vector<int> (B.size()+1, -1));
    int n(0), m(0);
    return lcs(A, B, n, m, dp);
}

int main()
{
    string A = "abbcdgf";
    string B = "bbadcgf";
    int const a = A.size();
    int const b = B.size();
    vector<vector<int>>
}
