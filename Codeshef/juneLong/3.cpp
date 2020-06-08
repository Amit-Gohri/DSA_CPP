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
        int arr[3] = {};//5,10,15 denomination
        int money;
        int N;
        cin >> N;
        int rtrn;
        while (N--)
        {
            cin >> money;
            if(money == 5) arr[0]++;
            if(money == 10) arr[1]++;
            if(money == 15) arr[2]++;
            //return amount could be 5 or 10
            if(rtrn==5){
                if(arr[0]==0){
                    cout << "NO" << endl;
                    goto label;
                }
                else
                {
                    arr[0]--;
                }
            }
            if (rtrn == 10)
            {
               if(arr[1]==0){
                   if (arr[0]<2)
                   {
                       cout << "NO" << endl;
                       goto label;
                   }
                   else
                   {
                       arr[0] += -2;
                   } 
               }
                else
                {
                    arr[1]--;
                } 
            }   
        }
        cout << "YES" << endl;
    }
}
