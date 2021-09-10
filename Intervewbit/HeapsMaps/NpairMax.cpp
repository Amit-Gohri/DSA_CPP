// https://www.interviewbit.com/problems/n-max-pair-combinations/
#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> A, vector<int> B){
    vector<int> ans;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int size = A.size();
    priority_queue<pair<int, pair<int, int>>> pq;
    int i = A.size() - 1, j = B.size() - 1;
    // pq.push(A[i] + B[i], i, j);
    pq.push(make_pair(A[i] + B[j], make_pair(i, j)));

    while (size--)
    {
        ans.push_back(pq.top().first);
        int i = pq.top().second.first;
        int j = pq.top().second.second;
        pq.pop();
        // pq.push(A[i - 1] + B[j], (i - 1, j));
        // pq.push(A[i] + B[j - 1]);
        if (i>0)
        {
            pq.push(make_pair(A[i - 1] + B[j], make_pair(i - 1, j)));
        }
        if (j>0)
        {
            pq.push(make_pair(A[i] + B[j - 1], make_pair(i, j - 1)));
        }
        
        
    }
    
    
}