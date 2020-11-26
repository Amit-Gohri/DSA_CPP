//prime numbers in given range
#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    int arr[100] = {0};
    for (int i = 2; i < n+1; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j < n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i < n+1; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    sieve(13);
}