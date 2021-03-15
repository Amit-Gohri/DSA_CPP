//https://www.interviewbit.com/problems/trailing-zeroes/
#include<bits/stdc++.h>
using namespace std;

int trailing(int A){
    int i(0);
    int count(0);
    while(A>=(1<<i)){
        if (A & (1<<i))
        {
            break;
        }
        else
        {
            count++;
        }
        
        
        i++;
    }
    return count;
}

int main(){
    cout << trailing(8);
}