// https://www.codechef.com/JULY20B/problems/CHEFSTR1

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
        int N;
        cin >> N;
        int num1(0), num2(0);
        ll ans(0);
        while (N--)
        {
            cin >> num2;
            if (num1 == 0)
            {
                num1 = num2;
                continue;
            }
            ans += abs(num2 - num1)-1;
            num1 = num2;
        }
        cout << ans << endl;
    }
    
}
// 1 6 11 6 10 11