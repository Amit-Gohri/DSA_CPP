//https://www.interviewbit.com/problems/xor-ing-the-subarrays/
#include <bits/stdc++.h>
using namespace std;

int xoring(vector<int> &A)
{
    int size = A.size();
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        int fre = (i + 1) * (size - 1);
        if (fre % 2 == 1)
        {
            ans = ans ^ A[i];
        }
    }
    return ans;
}