#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int z = s.length();
        int x=0,y=0,i=0;
        for(i=1; i<=z; i++) {
            if(i%2==1 && s[i-1]=='1') x++;
            else if(i%2==0 && s[i-1]=='1') y++;
            
            if(x-y > (z-i+1)/2 || y-x > (z-i)/2) {
                i++;
                break;
            }
        }
        cout<<i-1<<"\n";
    }
}