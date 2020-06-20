#include<bits/stdc++.h>
using namespace std;
int gcd (int A ,int B)
{
    if (A==0 || B==0)
    {
        return A > B ? A : B;
    }
    if (A<B)
    {
        int temp = A;
        A = B;
        B = temp;
    }

    
    if (A%B == 0)   
    {
        return B;
    }
    
    
    return gcd(B, A % B);
}