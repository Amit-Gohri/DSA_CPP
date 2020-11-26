#include<bits/stdc++.h>
using namespace std;

//a^b%c
int fast_expo(int a, int b, int c)
{
    if (b==0)
    {
        return 1%c;
    }
    else if (a==0)
    {
        return 0;
    }

    
    
    if (b%2==0)
    {
        return (fast_expo(a, b / 2, c)  * fast_expo(a, b / 2, c) ) % c;
    }
    else
    {
        return (fast_expo(a, b - 1, c) * a % c) % c;
    }
    
    
}

int main()
{
    cout << fast_expo(3, 4, 4);
}