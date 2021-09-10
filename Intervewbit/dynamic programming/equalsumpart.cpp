// https://www.interviewbit.com/old/problems/equal-average-partition/

#include<bits/stdc++.h>
using namespace std;

int equalpart(vector<int> A){
    int sum(0);
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
    }
    if (sum%2!=0)
    {
        return -1;
    }
    vector<vector<int>> dp(A.size() + 1, vector<int>(sum / 2 + 1, 0));

}