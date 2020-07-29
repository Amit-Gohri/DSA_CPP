// Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

// Each number in C may only be used once in the combination.

//  Note:
// All numbers (including target) will be positive integers.
// Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
// The solution set must not contain duplicate combinations.
// Example :

// Given candidate set 10,1,2,7,6,1,5 and target 8,

// A solution set is:

// [1, 7]
// [1, 2, 5]
// [2, 6]
// [1, 1, 6]

#include <bits/stdc++.h>
using namespace std;

void help(vector<int> &A, vector<vector<int>> &sol, vector<int> crt, int B, int no_of_child, int it, int sum)
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
            help(A, sol, crt, B, no_of_child-1, it+1, sum + A[it]);
            child--;
            it++;
            crt.pop_back(); //for backtracking
        }
    }
}
//after solving try to solve by passing address of crt instead of making copies
vector<vector<int>> combinationSum(vector<int> &A, int B)
{
    vector<vector<int>> sol;
    int sum(0);
    sort(A.begin(), A.end());
    // A.erase(unique(A.begin(), A.end()), A.end());
    vector<int> crt;
    help(A, sol, crt, B, A.size(), 0, sum);
    sol.erase(unique(sol.begin(), sol.end()), sol.end());
    return sol;
}

int main()
{
    vector<int> A = {10, 1, 2, 7, 6, 1, 5};
    vector<vector<int>> ans = combinationSum(A, 8);
}
how to remove dulplicates
