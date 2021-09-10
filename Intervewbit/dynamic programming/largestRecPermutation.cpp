// https://www.interviewbit.com/old/problems/largest-area-of-rectangle-with-permutations/
#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &A)
{
    if(A.size() == 0)
        return 0;   
    for (int j = 0; j < A[0].size(); j++)
    {
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i][j] == 1 and i > 0)
            {
                A[i][j] = A[i - 1][j] + 1;
            }
            else if (A[i][j] == 0)
            {
                A[i][j] = 0;
            }
        }
    }
    int maxArea(INT_MIN);
    for (int i = 0; i < A.size(); i++)
    {
        sort(A[i].begin(), A[i].end());
        //START from last index
        int area(0);
        for (int j = A[i].size() - 1; j >= 0; j--)
        {
            area = A[i][j] * (A[i].size() - j);
            maxArea = max(maxArea, area);
        }
    }

    if (maxArea > 0)
        return maxArea;
    return 0;
}