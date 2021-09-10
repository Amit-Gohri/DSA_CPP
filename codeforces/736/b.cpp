#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> enemy(n);
    vector<int> george(n);
    for (int i = 0; i < n; i++)
    {
        cin>>enemy[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> george[i];
    }
    int i(0);
    int max_pawns(0);
    while (i<n)
    {
        if (enemy[i] == 0)
        {
            if (george[i] == 1)
            {
                max_pawns++;
                i++;
            }
            else
            {
                i++;
            }
            
        }
        else
        {
            if (george[i-1] || george[i+1] == 1)
            {
                
            }
            
        }
        
        
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