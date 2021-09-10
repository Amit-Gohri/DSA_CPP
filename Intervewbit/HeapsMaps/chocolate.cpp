// https://www.interviewbit.com/problems/magician-and-chocolates/
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> B, int A){
    int max = 1000000007;
    int size = B.size();
    int chocolates(0);
    priority_queue<int> pq;
    for (int i = 0; i < size; i++)
    {
        pq.push(B[i]);

    }
    for (int i = 0; i < A; i++)
    {
        chocolates = (chocolates % max + pq.top() % max) % max;
        pq.push(floor(pq.top() / 2));
        pq.pop();
    }

    return chocolates;
}
int main(){

}