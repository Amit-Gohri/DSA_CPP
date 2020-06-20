#include<bits/stdc++.h>

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
        ll possibilities(0);
        ll ts,js(2);
        cin >> ts;
        if(ts<3)
            cout << 0 << endl;
        else
        {
           while (ts % 2 == 0)
            {
                ts = ts / 2;
            }
            
                if(js<ts)
                    possibilities = (ts - 1) / 2;
                
        
            cout<< possibilities <<endl;
            }
 
        }
        
            
}
