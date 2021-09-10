// https://www.interviewbit.com/old/problems/4-sum/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &A, int B)
{
    sort(A.begin(), A.end());
    set<vector<int>> ans;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            //apply two sum on remaining array
            int sum = A[i] + A[j];
            int reqSum = B - sum;
            int lo = j + 1;
            int hi = A.size() - 1;
            while (lo < hi)
            {
                int s = A[lo] + A[hi];
                if (s == reqSum)
                {
                    ans.insert({A[i], A[j], A[lo], A[hi]});
                    lo++;
                    hi--;
                }
                else if (s > reqSum)
                {
                    hi--;
                }
                else
                {
                    lo++;
                }
            }
        }
    }
    //remove the duplicates
    vector<vector<int>> a;
    for (auto i : ans)
    {
        a.push_back(i);
    }
    return a;
}
