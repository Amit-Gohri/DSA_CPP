#include<iostream>
using namespace std;
int Mrec(int n, int* fib){
    if(n==0)
        fib[n] = 0;
    else if(n==1||n==2)
        fib[n] = 1;
    else if(fib[n]==0){
        fib[n] = Mrec(n - 1, fib) + Mrec(n - 2, fib) + Mrec(n - 3, fib);
    }
    return fib[n];
}
int tribonacci(int n) {   
    int* fib = new int[n+1]{};
        return Mrec(n,fib);
}
int main(){
    cout<<tribonacci(5);
}