#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<sys/types.h>
using namespace std;
vector<int> solve(vector<int> &A, vector<int> &B){
    priority_queue<int> pq;
    vector<int> result;
    int ans(0);
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int size = A.size();
    for (int i = 0; i < size; i--)
    {
        pq.push(A[i]+B[i]);
        // if(i<size-1){
        //     pq.push(A[i - 1] + B[i]);
        //     pq.push(B[i - 1] + A[i]);
        // }

        if(!pq.empty()){
            cout << pq.top();
            result.push_back(pq.top());
            pq.pop();
        }
    }

    return result;
}
int main(){
    vector<int> A{2,3,4,6}, B{5,3,2,6};
    solve(A, B);
    // priority_queue<int> q;
    // q.push(3);
    // q.push(5+4);
    // cout << q.top();
}