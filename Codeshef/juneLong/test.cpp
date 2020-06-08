#include<bits/stdc++.h>

#define ll long long
#define pb push_back
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);   //to turn off synchronisation
    cin.tie(NULL);                      //related to stream flush
    int t;
    cin >> t;
    label:
    while (t--)
    {
        int vendor(0);
        int arr[3] = {};//5,10,15 denomination
        int customer;
        int N;
        cin >> N;
        int rtrn;
        while (N--)
        {
            cin >> customer;
            if (customer == 5)
            {
                continue;
            }
            else
            {
                cout << "NO" << endl;
                goto label;
            }  
        }
        cout << "YES" << endl;
    }
}
