#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int k;
    cin >> k;
    int i = 1;
    int it(0);
    while (it <= k)
    {
        if (i % 10 == 3 || (i % 3 == 0 and i >= 3))
        {
            //bad number
        }
        else
        {
            it++;
            if (it == k)
            {
                cout << i << endl;
            }
            
        }
        i++;
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