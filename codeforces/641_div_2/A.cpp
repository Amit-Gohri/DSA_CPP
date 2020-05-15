//not solved time limit exceeded
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void swap(int& a, int& b ){
    int temp = a;
    a = b;
    b = temp;
}
int cdiv(int N){                      // return divisor + n
    int d;
    int s = sqrt(N);
    int count(0);
    for (d = 2; d <= s; d++)
    {
        if (N % d == 0)
        {
            count++;
            break;
        }
        
    }
    if(count==0)
        d = N;
    return d ;
}                                      
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
         int N;
         int a,b;
        // while (k--)
        // {
        //     //  N = cdiv(n);
        //     N = cdiv(N);
        // }
        //  N = cdiv(n);
        for (int i = 1; i <= k; i++)
        {
            if(i==1){
                a = cdiv(n);
                b = n / a;
                N = n + a;
            }
            else
            {
                b++;
                if(b<a)
                    swap(a, b);
                N += min(a, b);
                
            }
            
        }
         cout << N << endl;
    }
    
}