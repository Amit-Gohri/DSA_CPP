// https://www.interviewbit.com/problems/nearest-smaller-element/

#include <bits/stdc++.h>
using namespace std;

void pv(vector<int> &A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}
vector<int> sol(vector<int> A)
{
    vector<int> ans(A.size());
    stack<int> s;
    for (int i = A.size()-1; i > -1; i--)
    {
        if (s.empty())
        {           
            s.push(A[i]);
            ans[i] = -1;
        }
        else
        {
            if (A[i] > s.top())                         //34, 35, 27, 42, 5, 28, 39, 20, 28
            {
                ans[i] = s.top();
                s.push(A[i]);
            }
            else
            {
                while (1)
                {
                    s.pop();
                    if (s.empty())
                    {
                        ans[i] = -1;
                        s.push(A[i]);
                        break;
                    }
                    else if (A[i] > s.top())
                    {
                        ans[i] = s.top();
                        s.push(A[i]);
                        break;
                    }
                    else
                    {
                        continue;
                    }
                    
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int> ans = sol({34, 35, 27, 42, 5, 28, 39, 20, 28});
    pv(ans);
}