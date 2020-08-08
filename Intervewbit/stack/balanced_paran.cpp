//https://www.interviewbit.com/problems/balanced-parantheses/

#include<bits/stdc++.h>
using namespace std;

int is_valid(string A)
{
    stack<int> s;
    for (int i = 0; i < A.size(); i++)
    {
        if (s.empty() == 1 && A[i] == ')')
        {
            return 0;
        }
        else
        {
            if (A[i] == '(')
            {
                s.push('(');
            }
            else
            {
                s.pop();
            }
        }
        
    }
    return 1;

}

int main()
{
    cout<<is_valid("())()");
}