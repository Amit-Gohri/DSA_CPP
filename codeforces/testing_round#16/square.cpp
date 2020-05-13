#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a[2];
        int b[2];
        int c = 0;
        int m(0);
        int ans(0);
        for (int i = 0; i < 2; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 2; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < 2; i++)
        {
            if(m==1)
                break;
            for (int j = 0; j < 2; j++)
            {
                if (a[i] == b[j]){
                    c = a[i];
                    a[i] = b[j] = 0;
                    m = 1;
                    break;
                }
            }
            
        }

        for (int i = 0; i < 2; i++)
        {
            ans += a[i];
        }
        for (int i = 0; i < 2; i++)
        {
            ans += b[i];
        }
        if(ans==c)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}