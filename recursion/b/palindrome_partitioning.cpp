//https://www.interviewbit.com/problems/palindrome-partitioning/

#include <bits/stdc++.h>
using namespace std;

void backtrack(string &A, vector<vector<string>> &sol, vector<string> crt, int it)
{
    if (it==A.size())
    {
        sol.push_back(crt);
    }
    //string substr;
    int no_of_child = A.size() - it;
    for (int i = 0; i < no_of_child; i++)
    {
        // string s(s1,from_pos,to_len);
        string substr(A, it, i + 1);
        bool check = isPalindrome(substr);
        if (check)
        {
            crt.push_back(substr);
            backtrack(A,sol,crt,it+i+1);
            crt.pop_back();
        }
    }
}
vector<vector<string>> pp(string A)
{
    vector<vector<string>> sol;
    int it(0);
    vector<string> crt;
    backtrack(A, sol, crt, it);
    return sol;
}

bool isPalindrome(string A)
{
    int s = A.size();
    int j(s - 1);
    int n = s / 2;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != A[j])
        {
            return false;
        }
        j--;
    }
    return true;
}

int main()
{
    // cout << isPalindrome("amtima");
}