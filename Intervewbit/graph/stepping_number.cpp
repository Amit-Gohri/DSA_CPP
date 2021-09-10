//https://www.interviewbit.com/problems/stepping-numbers/

#include <bits/stdc++.h>
using namespace std;

vector<int> stepping_number(int A, int B)
{
    vector<int> ans;
    if (A==0)
    {
        ans.push_back(0);
    }
    
    //queue<int> q;
    for (int i = 1; i < 10; i++)
    {
        queue<int> q;
        q.push(i);
        while (!q.empty())
        {
            int a = q.front();
            if (a <= B)
            {
                //check 0,9
                if (a % 10 == 0)
                {
                    q.push(a * 10 + 1);
                    q.pop();
                }
                else if (a % 10 == 9)
                {
                    q.push(a * 10 + 8);
                    q.pop();
                }
                else
                {
                    q.push(a * 10 + a % 10 + 1);
                    q.push(a * 10 + a % 10 - 1);
                    q.pop();
                }

                if (a >= A && a <= B) {
                    ans.push_back(a);
                }

                //push next set of elements
            }
            

            else if (a > B)
            {
                //pop the element
                q.pop();
            }
        }
    }
    return ans;
}

int main() {
    stepping_number(0, 100);
}