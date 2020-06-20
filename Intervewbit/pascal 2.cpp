#include <bits/stdc++.h>
using namespace std;
vector<int> pascal(int A)
{
    vector<int> crt;
    vector<int> pre;
    for (int i = 0; i < A + 1; i++)
    {
        if (i == 0)
        {
            pre.push_back(1);
        }
        else {
            int size = pre.size();
            for (int j = 0; j < size; j++)
            {
                if (j == 0)
                {
                    crt.push_back(pre[j]);
                    if ((j + 1) < size)
                    {
                        crt.push_back(pre[j] + pre[j + 1]);
                    }
                    else
                    {
                        crt.push_back(pre[j]);
                    }
                }
                else if (j + 1 == size)
                {
                    crt.push_back(pre[j]);
                }
                else
                {
                    crt.push_back(pre[j] + pre[j + 1]);
                }
            }
            pre = crt;
            crt.clear();
        }
    }
    return pre;
}

int main()
{
    vector<int> ans = pascal(2);
}