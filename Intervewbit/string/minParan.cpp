//https://www.interviewbit.com/problems/minimum-parantheses/
#include <bits/stdc++.h>
using namespace std;

int minParan(string A)
{
    stack<char> s;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '(')
        {
            s.push(A[i]);
        }
        else
        {
            if (!s.empty()  &&  s.top() == '(')
            {
                s.pop();
            }
            else
            {
                s.push(A[i]);
            }
        }
    }
    return s.size();
}

int main(){
    cout << minParan("())")<<endl;
}