#include <bits/stdc++.h>
using namespace std;

int minStoneSum(vector<int> &piles, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < piles.size(); i++)
    {
        pq.push(piles[i]);
    }
    
    while (k--)
    {
        int maxPile = pq.top();
        pq.pop();
        pq.push(maxPile - maxPile / 2);
    }
    int ans(0);
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }
    return ans;
}