// https://www.interviewbit.com/problems/profit-maximisation/
#include<bits/stdc++.h>
using namespace std;

int profit(vector<int> A, int B){
    priority_queue<int> pq;
    int profit(0);
    for (int i = 0; i < A.size(); i++)
    {
        pq.push(A[i]);
    }
    for (int i = 0; i < B; i++)
    {
        profit += pq.top();
        pq.push(pq.top() - 1);
        pq.pop();
    }
    return profit;
}