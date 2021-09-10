#include <bits/stdc++.h>
using namespace std;

int expo(int a, int b, int mod)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

int main()
{
    map<pair<int, int>, int> map;
    map[{1, 2}] = 3;
}