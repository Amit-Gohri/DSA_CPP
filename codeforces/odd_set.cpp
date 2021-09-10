#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> set(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> set[i];
    }
    int odd_count(0);
    int even_count(0);
    for (int i = 0; i < 2 * n; i++)
    {
        if (set[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    if (even_count == odd_count)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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