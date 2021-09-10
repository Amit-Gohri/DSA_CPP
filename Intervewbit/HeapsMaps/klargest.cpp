// https://www.interviewbit.com/problems/k-largest-elements/
#include <bits/stdc++.h>
using namespace std;

vector<int> klarge(vector<int> A, int k)
{
    //to make min heap we need to provide greator<int>          
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < A.size(); i++)
    {
        pq.push(A[i]);
        if (pq.size()>k)
        {
            pq.pop();
        }
        
    }
    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        
        pq.pop();
    }
    return ans;
}