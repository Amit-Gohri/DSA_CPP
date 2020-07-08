#include<bits/stdc++.h>
using namespace std;

vector<int> sol(const vector<int>& A) {
    vector<int> sol(2);
    long long n = A.size();
    long long arr_sum(0), sq_sum_arr(0);
    long long sq_sum = (n * (n + 1) * (2 * n + 1)) / 6;
    long long sum = (n * (n + 1)) / 2;
    long long a;
    for (int i = 0; i < n; i++)
    {
        arr_sum += A[i];
        a = A[i];
        sq_sum_arr += a * a;
    }
    int diff = sum - arr_sum;
    long long sq_diff = sq_sum - sq_sum_arr;
    long long add = sq_diff / diff;
    int M = (diff + add) / 2;
    int R = (-diff + add) / 2;
    sol[0] = R;
    sol[1] = M;
    return sol;
}
int main() {
    vector<int> A = { 3, 1 ,2, 5, 3};
    vector<int> a;
    a = sol(A);
    cout << a[0] << a[1];
}
