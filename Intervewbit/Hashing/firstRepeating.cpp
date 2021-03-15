// https://www.interviewbit.com/problems/first-repeating-element/
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> A){
    unordered_map<int, int> umap;
    for (int i = 0; i < A.size(); i++)
    {
        if(umap.find(A[i]) == umap.end()){
            umap[A[i]] = 1;
        }
        else
        {
            umap[A[i]]++;
        }
        
    }
    for (int i = 0; i < A.size(); i++)
    {
        if (umap[A[i]]>1)
        {
            return A[i];
        }
        
    }
    
    return -1;
}

int main(){
    cout << solve({1, 2, 3, 4, 2, 1});
}