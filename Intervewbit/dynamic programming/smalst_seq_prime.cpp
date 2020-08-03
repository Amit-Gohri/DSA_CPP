//https://www.interviewbit.com/problems/smallest-sequence-with-given-primes/

#include <bits/stdc++.h>
using namespace std;

vector<int> sol(int A, int B, int C, int D)
{
    vector<int> seq(D);
    set<int> s;
    int min = 1;
    for (int i = 0; i < D; i++)
    {
        s.insert(min * A);
        s.insert(min * B);
        s.insert(min * C);
        seq[i] = *(s.begin());
        s.erase(s.begin());
    }
    return seq;
}

int main()
{
    vector<int> ans = sol(2, 3, 5, 5);
    for(int i : ans)
    {
        cout << i;
    }
}