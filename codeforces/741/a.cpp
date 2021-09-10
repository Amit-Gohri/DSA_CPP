#include<bits/stdc++.h>
using namespace std;

void solve(){
    int r, l;
    cin >> l;
    cin >> r;

    if (l<=r/2)
    {
        if (r%2==0)
        {
            cout << r / 2 - 1<<endl;
        }
        else
        {
            cout << r / 2<<endl;
        }
        
        
    }
    else
    {
        cout << r - l<<endl;
    }
    
    
}


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}