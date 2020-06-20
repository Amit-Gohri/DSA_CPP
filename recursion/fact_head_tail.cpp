#include<iostream>
using namespace std;
int head(int a){
    if (a==1)
    {
        return 1;
    }
    
    return a * head(a - 1);
}
int tail(int n,int i,int a){
    //initially i =1
    if(i==n+1)
        return a;
    a = a * i;
    tail(n,i + 1,a);
}
int main(){
    int a;
    cout << tail(5, 1, 1);
}

// # Termination statement must not be an expression
// # Termination statement should be the last call in the function

// def factorial(n, a):
//   if n < 0:
//     return 0
//   elif n == 0:
//     return 1
//   elif n == 1:
//     return a
//   else:
//     return factorial(n - 1, n * a)