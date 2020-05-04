#include<iostream>
//#include<vector>
using namespace std;
int main(){
    int t(0);
    cin >> t;
    while(t--){
        int c = 0;
        int N(0);
        int covid19(-21);
        cin >> N;
        //vector<int> seq;
        for(int i=0;i < N;i++){
            int a;
            cin >> a;
            if(a==1){
                if(i-covid19<6){
                    cout << "NO\n";
                    c++;
                    break;
                                }
                else covid19 = i;
            }
            
            //seq.push_back(a);   
        }
        if(c==0) cout << "YES\n";
        //main solution

    }
}