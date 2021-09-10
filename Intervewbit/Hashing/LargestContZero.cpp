// https://www.interviewbit.com/old/problems/largest-continuous-sequence-zero-sum/
#include <bits/stdc++.h>
using namespace std;

vector<int> lzero(vector<int> A)
{
    int x(0);
    vector<int> presum(A.size());
    for (int i = 0; i < A.size(); i++)
    {
        x += A[i];
        presum[i] = x;
    }
    unordered_map<int, int> map;
    int dist(INT_MIN);
    int start(0), end(0);
    for (int i = 0; i < presum.size(); i++)
    {
        if (!map[presum[i]])
        {
            map[presum[i]] = i;
        }
        else
        {
            //CALCULATE DISTANCE
            int d = i - map[presum[i]];
            // dist = max(dist, d);
            if (d > dist)   
            {
                //update the
                dist = d;
                start = map[presum[i]];
                end = i;
            }
        }
    }
    vector<int> ans;
    for (int i = start+1; i <= end; i++)
    {
        ans.push_back(A[i]);
    }
    return ans;
}