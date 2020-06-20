#include<bits/stdc++.h>
using namespace std;
int sol(vector<int> A){
    sort(A.begin(), A.end());
    int size = A.size();
    for (int  i = 0; i < size; i++)
    {
        //size-i+1 == A[i]
        if(size-(i+1) == A[i])
        {
            return 1;
        }
    }
    return -1;
}
int main(){
    cout << sol({5,6,2});
}