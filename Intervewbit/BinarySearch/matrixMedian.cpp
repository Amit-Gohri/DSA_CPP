//https://www.interviewbit.com/problems/matrix-median/

#include <bits/stdc++.h>
using namespace std;

int matmed(vector<vector<int>> &A)
{
    int min(INT_MIN), max(INT_MAX);
    for (int i = 0; i < A.size(); i++)
    {
        // Finding the minimum element
        if (A[i][0] < min)
            min = A[i][0];

        // Finding the maximum element
        if (A[i][A[i].size() - 1] > max)
            max = A[i][A[i].size() - 1];
    }

    int mid = (min + max / 2);
    int small(0);

    
    
}
