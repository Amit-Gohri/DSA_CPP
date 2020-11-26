//https://www.interviewbit.com/problems/stairs/

#include<bits/stdc++.h>
using namespace std;

int climbStairs(int A)
{
    if (A==0)
    {
        return 0;
    }
    int arr[37] = {0};
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= A; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[A];
}

int main()
{
    cout << climbStairs(2);
}