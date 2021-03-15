// https://www.interviewbit.com/problems/permutations/

#include<bits/stdc++.h>
using namespace std;


void solve(vector<int> A, vector<vector<int>>& ans, vector<int> temp, int i){
    if (i == A.size())
    {
        ans.push_back(temp);
    }
    else
    {
        for (int j = i; j < A.size(); j++)
        {
            swap(A[i], A[j]);
            temp[i] = A[i];
            solve(A, ans, temp, i + 1);
            swap(A[i], A[j]);
        }
        
    }
}

vector<vector<int>> permutation(vector<int> A){
    vector<vector<int>> ans;
    vector<int> temp(A.size());
    int i(0);
    solve(A, ans, temp, i);
    return ans;
}

int main(){
    permutation({1, 2, 3});
}