//https://www.interviewbit.com/problems/min-xor-value/
#include<bits/stdc++.h>
using namespace std;

int minxor(vector<int> A){
    sort(A.begin(), A.end());
    int m(INT_MAX);
    for (int i = 0; i < A.size(); i++)
    {
        if (i<A.size()-1)
        {
            m = min((A[i] ^ A[i + 1]), m);
        }
        
    }
    return m;
}