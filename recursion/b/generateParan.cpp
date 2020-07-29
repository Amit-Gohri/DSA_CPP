//https://www.interviewbit.com/problems/generate-all-parentheses-ii/

#include <bits/stdc++.h>
using namespace std;
// bool is_valid(string A)
// {
//     int l_bracket(0);
//     for (int i = 0; i < A.size(); i++)
//     {
//         if (A[i] == ')')
//         {
//             l_bracket--;
//             if (l_bracket < 0)
//                 return 0;
//         }
//         else
//         {
//             l_bracket++;
//         }
//     }
//     return l_bracket ? 0 : 1;
// }

void backtrack(int n, vector<string> &sol, string crt, int x, int y)
{ 
    if(x>=y && x<=n && y<=n){
    
    if (crt.length() == 2 * n)
    {
        sol.push_back(crt);
    }
    
    
    else 
    {
            
            crt.push_back('(');
            backtrack(n, sol, crt, x + 1, y);
            crt.pop_back();
            
            crt.push_back(')');
            backtrack(n, sol, crt, x, y + 1);
    }}
}

vector<string> generateParantheses(int n)
{
    vector<string> sol;
    string crt;
    int x(0), y(0); //xfor( and yfor)
    backtrack(n, sol, crt, x, y);
    return sol;
}