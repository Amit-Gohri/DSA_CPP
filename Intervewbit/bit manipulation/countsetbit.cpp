//https://www.interviewbit.com/problems/count-total-set-bits/
#include <bits/stdc++.h>
using namespace std;

int count(int A)
{
    
    int N = 1000000007;
    int count(0), ans(0);
    for (int i = 1; i <= A; i++)
    {
        int j = i;
        while (j)
        {
            if (j & (1 << 0))
            {
                count = ((count % N) + 1);
            }
            j = j >> 1;
        }
        ans = (ans % N + count % N) % N;
    }

    return ans;
}

int main()
{
    cout << count(4);
}