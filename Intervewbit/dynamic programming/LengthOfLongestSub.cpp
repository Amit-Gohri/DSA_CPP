//https://www.interviewbit.com/problems/length-of-longest-subsequence/

#include <bits/stdc++.h>
using namespace std;

int max_(int A, int B)
{
    return max(A, B);
}

int _lis(vector<int>& A, int n)
{
    int max(0);
    int* lis = new int[n];
    int* lds = new int[n];
    if (n==0)
    {
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        int mlis(0);
        if (i == 0)
        {
            lis[i] = 1;
        }

        for (int j = 0; j < i; j++)
        {

            if (A[i] > A[j])
            {
                mlis = max_(mlis, lis[j]);
            }
        }
        if (mlis == 0)
        {
            lis[i] = 1;
        }
        else
        {
            lis[i] = mlis + 1;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int mlds(0);
        if (i == n-1)
        {
            lds[i] = 1;
        }
        for (int j = n - 1; j > i; j--)
        {
            if (A[i] > A[j])
            {
                mlds = max_(mlds, lds[j]);
            }
        }
        if (mlds == 0)
        {
            lds[i] = 1;
        }
        else
        {
            lds[i] = mlds + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        max = max_(max, lds[i] + lis[i]);
    }
    return max - 1;
}

int lis(vector<int> A)
{
    return _lis(A, A.size());
}

int main()
{
    cout << lis({ 12, 11, 40, 5, 3, 1 });
}
