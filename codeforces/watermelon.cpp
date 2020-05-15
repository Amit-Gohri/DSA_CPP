// #include<iostream>
// using namespace std;
// int main(){
//     int weight(0);
//     cin >> weight;
//     if(weight%2==0){
//         //even 
//         if(weight==2){
//             cout << "NO";
//         }
//         else
//             cout << "YES";
//     }
//     else cout << "NO";
// }
#include<iostream>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long int c,b;
    if(n % a==0) c = n/a;
    else c = (n/a)+1;
    if(m%a==0) b = m/a;
    else b = (m/a)+1;
    long long int ans;
    ans = c*b;
    cout << ans;
  
}