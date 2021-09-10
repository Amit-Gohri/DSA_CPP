// https://www.interviewbit.com/problems/2-sum/

#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> A, int B){
    unordered_map<int, int> umap;
    vector<int> ans;
    for (int i = 0; i < A.size(); i++)
    {
        if (umap.find(B - A[i]) == umap.end())
        {
            umap[A[i]] = i;
        }
        else
        {
            ans.push_back(umap[B - A[i]] + 1);
            ans.push_back(i + 1);
        }
        
    }
    return ans;
}