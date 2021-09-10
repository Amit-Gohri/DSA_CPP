#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int Pnum = 2 * abs(a - b);
    if (Pnum < a or Pnum < b)
        cout << -1 << endl;
    else
    {
        if (c <= Pnum)
        {
            if (c > Pnum / 2)
            {
                cout << (c + (Pnum / 2)) % Pnum << endl;
            }
            else
            {
                cout << c + Pnum / 2 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
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