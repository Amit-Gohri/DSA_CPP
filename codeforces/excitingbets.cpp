//https://codeforces.com/contest/1543/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a;
    cin >> a;
    long long b;
    cin >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
    }

    else
    {
        long long diff = abs(b - a);
        cout << diff << " " << (a % diff <= diff / 2 ? a % diff : diff - a % diff) << endl;
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}