//https://www.interviewbit.com/problems/valid-bst-from-preorder/

#include<bits/stdc++.h>
using namespace std;
void pv(vector<int> &A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}   
vector<int> nextgrtr(vector<int> A)
{
    vector<int> next_greater(A.size());
    stack<int> s;
    for (int i = A.size()-1; i > -1; i--)
    {
        if (s.empty())
        {           
            s.push(i);
            next_greater[i] = -1;
        }
        else
        {
            if (A[i] < A[s.top()])                         //34, 35, 27, 42, 5, 28, 39, 20, 28
            {
                next_greater[i] = s.top();
                s.push(i);
            }
            else
            {
                while (1)
                {
                    s.pop();
                    if (s.empty())
                    {
                        next_greater[i] = -1;
                        s.push(i);
                        break;
                    }
                    else if (A[i] < A[s.top()])
                    {
                        next_greater[i] = s.top();
                        s.push(i);
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
    return next_greater;
}

vector<int> presmaller(vector<int> A)
{
    vector<int> pre_small(A.size());
    stack<int> s;
    for (int i = A.size()-1; i > -1; i--)
    {
        if (s.empty())
        {           
            s.push(i);
            pre_small[i] = -1;
        }
        else
        {
            if (A[i] > A[s.top()])                         //34, 35, 27, 42, 5, 28, 39, 20, 28
            {
                pre_small[i] = s.top();
                s.push(i);
            }
            else
            {
                while (1)
                {
                    s.pop();
                    if (s.empty())
                    {
                        pre_small[i] = -1;
                        s.push(i);
                        break;
                    }
                    else if (A[i] > A[s.top()])
                    {
                        pre_small[i] = s.top();
                        s.push(i);
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
    return pre_small;
}

bool valid_bst(vector<int> &A)
{
    vector<int> next_greater = nextgrtr(A);
    vector<int> pre_smaller = presmaller(A);
    for (int i = 0; i < A.size(); i++)
    {
        if (next_greater[i] >= pre_smaller[i])
        {
            continue;
        }
        else
        {
            return 0;
        }
        
    }
    return 1;
}



int main(){
    vector<int> ans = presmaller({34, 35, 27, 42, 5, 28, 39, 20, 28});
    pv(ans);
}


