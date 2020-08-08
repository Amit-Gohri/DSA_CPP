//https://www.interviewbit.com/problems/sliding-window-maximum/

#include<bits/stdc++.h>
using namespace std;

void pv(vector<int> A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}


vector<int> sliding_window(vector<int> A, int B)
{
    vector<int> ans;
    deque<int> dq;
    int mx(-1);
    for (int i = 0; i < B; i++)
    {
        {
            if (dq.empty())
            {
                dq.push_back(i);
            }
            while (!dq.empty() and A[dq.back()] <= A[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }

    }
    //1, 6, 2, 3, 4
    ans.push_back(A[dq.front()]);
    for (int i = B; i < A.size(); i++)
    {
        //removing the indexes that are excluded from the window
        if (i - B == dq.front())
        {
            dq.pop_front();
        }

        //pushing elements at back        
        while (!dq.empty() && A[i] > A[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);

        //puhshing elements to the ans
        ans.push_back(A[dq.front()]);
    }
    return ans;
}
int main()
{
    pv(sliding_window({ 1, 3, -1, -3, 5, 3, 6, 7 }, 3));
}