// Given two integers n and k, return all possible combinations of k numbers out of 1 2 3 ... n.

// Make sure the combinations are sorted.

// To elaborate,

// Within every entry, elements should be sorted. [1, 4] is a valid entry while [4, 1] is not.
// Entries should be sorted within themselves.
// Example :
// If n = 4 and k = 2, a solution is:

// [
//   [1,2],
//   [1,3],
//   [1,4],
//   [2,3],
//   [2,4],
//   [3,4],
// ]
//  Warning : DO NOT USE LIBRARY FUNCTION FOR GENERATING COMBINATIONS.
// Example : itertools.combinations in python.
// If you do, we will disqualify your submission retroactively and give you penalty points.
// NOTE: You only need to implement the given function. Do not read input, instead use the arguments to the function. Do not print the output, instead return values as specified. Still have a doubt? Checkout Sample Codes for more details.

#include <bits/stdc++.h>
using namespace std;

void help(vector<int> com, vector<vector<int>>& sol, int A, int B, int count, int it)
{
    //it tells no of child of current node and i tells what to pushback in each children.
    if (count == B)
    {
        sol.push_back(com);
        //do not run the loop
    }
    else
    {
        for (int i = it; i < A; i++)
        {
            com.push_back(i + 1);
            
            help(com, sol, A, B, count+1, i + 1);
            com.pop_back();
        }
    }
}

vector<vector<int>> combine(int A, int B)
{
    vector<vector<int>> sol;
    int count(0);
    vector<int> com;
    int i(0);
    help(com, sol, A, B, count, 0);
    return sol;
}

int main() {
    vector<vector<int>> ans = combine(1, 4);
}