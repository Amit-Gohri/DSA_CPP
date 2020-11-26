//https://codeforces.com/contest/1401/problem/0

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>

using namespace std;

void pv(vector<int> &A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}

//solve function

int main()
{
    ios_base::sync_with_stdio(false); //to turn off synchronisation
    cin.tie(NULL);                    //related to stream flush
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k > n)
        {
            cout << k - n << endl;
        }
        else
        {
            if (k == 0)
            {
                if (n % 2 == 0)
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
            else if (k == n)
            {
                cout << 0 << endl;
            }
            else
            {
                if ((n % 2 == 0 && k % 2 == 0) || (n % 2 != 0 && k % 2 != 0))
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
        }
    }
}
