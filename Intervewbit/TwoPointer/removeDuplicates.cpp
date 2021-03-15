//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/
#include<bits/stdc++.h>
using namespace std;

int removeDup(vector<int> &A){
    vector<int> B;
    for (int i = 0; i < A.size(); i++)
    {
        if (i==0)
        {
            B.push_back(A[i]);
        }
        
        else if(A[i] != A[i - 1] && i > 0)
        {
            B.push_back(A[i]);
        }
        
    }
    A = B;
    return B.size();
}

int main(){
    vector<int> A = {1, 1, 2, 3};
    cout << removeDup(A);
    cout << A[0] << A[1] << A[2];
}