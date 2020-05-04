#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
using namespace std;
int kadane_max_cont_subarr(vector<int> &A){
    int size = A.size();
    int max_sum(INT_MIN);
    int local_max = -1;
    for (int i = 0; i < A.size(); i++)
    {
        local_max = max(A[i], local_max + A[i]);
        max_sum = max(max_sum, local_max);
    }
    return max_sum;
}