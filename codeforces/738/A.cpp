#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        num.push_back(a);
    }
    int ans(INT_MAX);
    while (n)
    {
        for (int i = 0; i < n; i++)
        {
            num[i] = num[i] & num[n - 1 - i];
            ans = min(ans, num[i]);
        }
        n = n / 2;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}