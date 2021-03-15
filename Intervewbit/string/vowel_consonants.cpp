//https://www.interviewbit.com/problems/vowel-and-consonant-substrings/
#include <bits/stdc++.h>
using namespace std;

void help(vector<int> &v, vector<int> &c, string A)
{
    if (A.size() > 1)
    {
        for (int i = 1; i < A.size(); i++)
        {
            if (A[i - 1] == 'a' || A[i - 1] == 'e' || A[i - 1] == 'i' || A[i - 1] == 'o' || A[i - 1] == 'u')
            {
                v[i] = v[i - 1] + 1;
                c[i] = c[i - 1];
            }
            else
            {
                v[i] = v[i - 1];
                c[i] = c[i - 1] + 1;
            }
        }
    }
}

int solve(string &A)
{
    int size = A.size();
    int result(0);
    vector<int> v(size, 0);
    vector<int> c(size, 0);
    help(v, c, A);
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            result += c[i];
        }
        else
        {
            result += v[i];
        }
    }
    return result;
}