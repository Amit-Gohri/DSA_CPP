//Permutation Sequence

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void factorial(int n, vector<int> &A)
    {
        
    }
    string getPermutation(int n, int k)
    {
        string s;
        iota(s.begin(), s.end(), 1);
        vector<int> fact(n);
        while (--n)
        {
            factorial(n, fact);
            int fact_n = fact[n];
        }
    }
};