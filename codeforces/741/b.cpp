#include<bits/stdc++.h>
using namespace std;

vector<int> seive(int n){
    vector<bool> primes(n+1, 1);
    for (int i = 2; i < sqrt(n); i++)
    {
        if (primes[i])
        {
            for (int j = i; j < n; j+=i)
            {
                primes[j] = false;
            }
            
        }
        
        
    }
    

}

void solve(){
    int k;
    cin >> k;
    string s;
    cin >> s;

}


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}