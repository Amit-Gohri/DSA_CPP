// https://www.interviewbit.com/old/problems/n-digit-numbers-with-digit-sum-s-/ 

#include<bits/stdc++.h>
using namespace std;

//only edge case pending i.e number with leading zeroes
int rec(int A, int B, vector<vector<int>>& lookup) {
    if (A == 0)
    {
        if(B==0) return 1;
        return 0;
    }

    if (A == 1) {
        if(B>=10 || B==0) return 0;
        return 1;
    }



    if (lookup[A][B] != -1)
    {
        return lookup[A][B];
    }

    int ans = 0;

    for (int i = 0; i < 10; i++)
    {
        if (B - i >= 0)
        {
            ans = (ans%1000000007 + rec(A - 1, B - i, lookup)%1000000007)%1000000007;
        }


    }
    lookup[A][B] = ans;
    return ans;
}

int solve(int A, int B) {
    vector<vector<int>> lookup(A + 1, vector<int>(B + 1, -1));
    return rec(A, B, lookup);
}

int main() {
    cout << solve(75, 22);
}