

#include <bits/stdc++.h>
using namespace std;

vector<int> nextgreator(vector<int> &A)
{
    stack<int> s;
    vector<int> ans(A.size());

    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (i == A.size() - 1)
        {
            s.push(i);
            ans[i] = i;
        }
        else
        {
            if (A[i] <= s.top())
            {
                s.push(i);
                ans[i] = s.top();
            }
            else
            {
                while (!s.empty())
                {
                    if (A[s.top()] < A[i])
                    {
                        s.pop();
                    }
                    else
                    {
                        break;
                    }
                }
                ans[i] = s.top();
                s.push(i);
            }
        }
        
    }
    return ans;
}

int validBST(vector<int> A){
    
}