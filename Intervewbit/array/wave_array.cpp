//https://www.interviewbit.com/problems/wave-array/
#include<bits/stdc++.h>
using namespace std;

vector<int> wave(vector<int> &A) {
    int N = A.size(), i = 0;
    sort(A.begin(), A.end());
    
    for(i = 0; i<N-1; i+=2){
        swap(A[i], A[i+1]);
    }
    return A;
}