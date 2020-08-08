// https://www.interviewbit.com/problems/largest-rectangle-in-histogram/

#include <bits/stdc++.h>
using namespace std;

vector<int> nxt_sml(vector<int>& A)
{
    vector<int> ans(A.size());
    stack<int> s;
    for (int i = A.size() - 1; i > -1; i--)
    {
        if (s.empty())
        {
            s.push(i);
            ans[i] = A.size();
        }
        else
        {
            if (A[i] > A[s.top()]) //34, 35, 27, 42, 5, 28, 39, 20, 28
            {
                ans[i] = s.top(); //1 4 3 4
                s.push(i);
            }
            else
            {
                while (1)
                {
                    s.pop();
                    if (s.empty())
                    {
                        ans[i] = A.size();
                        s.push(i);
                        break;
                    }
                    else if (A[i] > A[s.top()])
                    {
                        ans[i] = s.top();
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
    return ans;
}
vector<int> pre_sml(vector<int>& A)
{
    vector<int> ans(A.size());
    stack<int> s;
    for (int i = 0; i < A.size(); i++)
    {
        if (s.empty())
        {
            s.push(i);
            ans[i] = -1;
        }
        else
        {
            if (A[i] > A[s.top()]) //34, 35, 27, 42, 5, 28, 39, 20, 28
            {
                ans[i] = s.top(); //1 4 3 4
                s.push(i);
            }
            else
            {
                while (1)
                {
                    s.pop();
                    if (s.empty())
                    {
                        ans[i] = -1;
                        s.push(i);
                        break;
                    }
                    else if (A[i] > A[s.top()])
                    {
                        ans[i] = s.top();
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
    return ans;
}
int max_area(vector<int> A)
{ //for every bar we have to find nearest smaller bar

    vector<int> pre = pre_sml(A);
    vector<int> nxt = nxt_sml(A);
    int width(0);
    int max_area(0);
    for (int i = 0; i < A.size(); i++)
    {
        width = nxt[i] - pre[i] - 1;
        max_area = max(width * A[i], max_area);
    }
    return max_area;
}

int main()
{
    cout << max_area({ 2, 1, 5, 6, 2, 3 });
}
