//https://codeforces.com/contest/1514/problems?locale=en

#include<bits/stdc++.h>

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

int perfect_sq(int A){
    double a = sqrt(A);
    int b = sqrt(A);
    if (a-b == 0)
    {
        return 1;
    }
    return 0;
}

//solve function
void solve(){
    int n;
    cin >> n;
    int arr[n];
    int bit(1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(!perfect_sq(arr[i])){
            cout << "YES" << endl;
            bit = 0;
            break;
        }
    }
    if (bit) cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);   //to turn off synchronisation
    cin.tie(NULL);                      //related to stream flush
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}
