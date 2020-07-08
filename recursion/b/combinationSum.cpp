// Given a set of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

// The same repeated number may be chosen from C unlimited number of times.

//  Note:
// All numbers (including target) will be positive integers.
// Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
// The combinations themselves must be sorted in ascending order.
// CombinationA > CombinationB iff (a1 > b1) OR (a1 = b1 AND a2 > b2) OR … (a1 = b1 AND a2 = b2 AND … ai = bi AND ai+1 > bi+1)
// The solution set must not contain duplicate combinations.
// Example,
// Given candidate set 2,3,6,7 and target 7,
// A solution set is:

// [2, 2, 3]
// [7]

#include <bits/stdc++.h>
using namespace std;

void help(vector<int>& A, vector<set<int>>& sol, vector<int> crt, int B, int no_of_child, int it, int sum)
{
    if (sum == B)
    {
        sol.push_back(crt);
    }
    else if (sum > B)
    {
        crt.pop_back();
    }
    else
    {
        int child = no_of_child;
        for (int i = 0; i < no_of_child; i++)
        {
            
            crt.push_back(A[it]);
            help(A, sol, crt, B, child- 1 , it+1, sum + A[it]);
            child--;
            it++;
            crt.pop_back(); //for backtracking
        }
    }
}
//after solving try to solve by passing address of crt instead of making copies
vector<vector<int>> combinationSum(vector<int>& A, int B)
{
    vector<set<int>> sol;
    int sum(0);
    vector<int> crt;
    help(A, sol, crt, B, A.size(), 0, sum);
    return sol;
}

int main()
{
    vector<int> A = { 10,1,2,7,6,1,5 };
    vector<vector<int>> ans = combinationSum(A, 8);
}