// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;
// int rem(long long a){
//     int ma(INT_MIN), mi(INT_MAX);
//     while (a)
//     {
//         int r = a % 10;
//         mi = min(r, mi);
//         ma = max(r, ma);
        
//         a = a / 10;
//     }
//     return ma * mi;
// }
// long long rec(int a1, int k){
//  // static int i(0);
//     if(k==1){
//         return a1;
//     }
//     long long b;
//     long long a = rec(a1, k - 1);
//     b = a + rem(a);

//     return b;
// }
// int main(){
//     int t;  
//     cin >> t;
//     while (t--)
//     {
//         long long a1;
//         cin >> a1;
//         long long k;
//         cin >> k;
//         int result = rec(a1, k);
//         cout << result << endl;
//     }
// }



#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int rem(long long a){
    int ma(INT_MIN), mi(INT_MAX);
    while (a)
    {
        int r = a % 10;
        mi = min(r, mi);
        ma = max(r, ma);
        
        a = a / 10;
    }
    return ma * mi;
}
int main(){
    int t;  
    cin >> t;
    while (t--)
       {
            long long a;
            cin >> a;
            long long b = a;
            long long k;
            cin >> k;
            for (int i = 0; i < k - 1;i++)
            {
                int ma(INT_MIN), mi(INT_MAX);
                b = a;
                while (b)
                {
                    int r = b % 10;
                    mi = min(r, mi);
                    ma = max(r, ma);
                    b = b / 10;
                }
                int m = ma * mi;
                if(m == 0)
                    break;
                a = a + m;
                
            }
            cout << a << endl;
       }
}   