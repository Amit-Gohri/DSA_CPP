#include<bits/stdc++.h>
using namespace std;
int f[10] = {0,1,-1,-1,-1,-1,-1,-1,-1,-1};
int fib(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        if (f[n]==-1)
        {
            f[n] = fib(n - 1) + fib(n - 2);
        }
        return f[n];
        
        
        
    }
    
}

int main()
{
    cout<<fib(7);
}
//0 1 1 2 3 5 8 13 21