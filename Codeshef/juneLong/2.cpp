
#include<iostream>
#include<string>
#define ll long long
#define pb push_back
using namespace std;



int main(){
    //ios_base::sync_with_stdio(false);   //to turn off synchronisation
    //cin.tie(NULL);                      //related to stream flush
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int size = s.size();
        int pair(0);
        for (int i = 0; i < size-1; i++)
        {
            if (s[i]!=s[i+1])
            {
                pair++;
                i++;
            }
            
        }
        cout << pair << endl;
    }
    
}
