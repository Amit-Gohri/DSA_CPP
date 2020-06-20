#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;

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
        int odd(1), eve(2);
        int count(0);
        for (int i = 1; i <= N * N; i++)
        {
            count++;//for ith line counter
            
            cout << odd << " ";
            odd += 2;
            if (count == N)
            {
                cout << endl;
                count = 0;
                continue;
            }
            label:
            count++;
            i++;//loop counter
            cout << eve << " ";
            eve += 2;
            if (count == N)
            {
                cout << endl;
                count = 0;
                goto label;
            } 
        }
    }
}
