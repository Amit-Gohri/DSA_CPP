//https://codeforces.com/contest/1541/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i <= n; i++)
    {
        a.push_back(i);
    }
    
    if (n%2==0)
    {
        for (int i = 0; i < n; i+=2)
        {
            swap(a[i], a[i + 1]);
        }
        
    }
    else
    {
        for (int i = 0; i < n-1; i+=2)
        {
            swap(a[i], a[i + 1]);

        }
        swap(a[n - 2], a[n - 1]);
    }

    //print the array

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}