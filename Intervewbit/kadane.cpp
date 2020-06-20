#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> A){
    int max_sum(0);
    int size = A.size();
    int global_max(INT_MIN);
    for (int sub_array_ending_with_index = 0; sub_array_ending_with_index < size; sub_array_ending_with_index++)
    {
        max_sum = max(max_sum + A[sub_array_ending_with_index], A[sub_array_ending_with_index]);
        //cout << max_sum;
        global_max = max(max_sum, global_max);
    }
    return global_max;
}
int main(){
    cout << kadane({-2, 1, -3, 4, -1, 2, 1, -5, 4});
}