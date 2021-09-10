#include<bits/stdc++.h>
using namespace std;

void solve(){
    int k;
    cin >> k;
    int i = 0;
    while (i*i+1<=k)
    {
        i++;
    }
    i--;
    int row(0), col(0);
    if (k>=i*i +1 and k<= i*i+1+i )
    {
        col = i;
        row = k - (i * i + 1);
    }
    else
    {
        row = i;
        col = i -  (k - (i * i + i + 1));
    }
    cout << row+1 << " " << col+1 << endl;
}


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}