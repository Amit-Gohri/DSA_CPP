// https://www.interviewbit.com/problems/letter-phone/

#include <bits/stdc++.h>
using namespace std;

void backtrack(string &A, string crt, vector<string> &sol, unordered_map<char, string> &keypad, int l, int s)
{
    if (crt.size() == s)
    {
        sol.push_back(crt);
    }
    else
    {
        char key = A[l];
        auto it = keypad.find(A[l]);
        string str = it->second;
        for (int i = 0; i < str.size(); i++)
        {
            crt.push_back(str[i]);
            backtrack(A, crt, sol, keypad, l + 1, s);
            crt.pop_back();
        }
    }
}

vector<string> letterCombination(string A)
{
    vector<string> sol;
    int l(0);
    int size = A.size();
    string crt;
    unordered_map<char, string>
        keypad = {
            {'1', "1"},
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"},
            {'0', "0"}};
    //sort(A.begin(), A.end());
    backtrack(A, crt, sol, keypad, 0, size);
    return sol;
}