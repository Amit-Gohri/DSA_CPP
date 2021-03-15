//https://www.interviewbit.com/problems/leaders-in-an-array/
#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> A)
{
    vector<int> ans;
    int leader(INT_MIN);
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] > leader)
        {
            ans.push_back(A[i]);
            leader = A[i];
        }
    }
    return ans;
}