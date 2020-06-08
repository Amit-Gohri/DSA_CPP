//#include<bits/stdc+.h>
#include<iostream>
#define ll long long
#define pb push_back
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);   //to turn off synchronisation
    cin.tie(NULL);                      //related to stream flush
    int t;
    cin >> t;
    while (t--)
    {
        int N(0), k(0);
        int rev_loss(0);
        cin >> N >> k;
        int price(0);
        while (N--)
        {
            cin >> price;
            if (price > k)
            {
                rev_loss += -k + price;
            }
            
        }
        cout << rev_loss << endl;
    }
    
}
