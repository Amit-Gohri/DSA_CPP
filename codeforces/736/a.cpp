#include<bits/stdc++.h>
using namespace std;

void solve(){
    int p;
    cin >> p;
    if (p==5)
    {
        cout << 2 << " " << 4 << endl;
    }
    
    else cout << 2 << " " << p / 2 << endl;
}


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}