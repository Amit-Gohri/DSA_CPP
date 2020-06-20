#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
vector<int> sol(vector<int>& A) {
    vector<int> soln;
    int size = A.size();
    vector<int> B;
    for (int i = 0; i < size; i++) {
        B.push_back(A[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (B[i] != i + 1)
        {
            if (B[i] != B[B[i] - 1]);
            {
                swap(B[i], B[B[i] - 1]);
                i--;

            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (B[i] != i + 1)
        {
            soln.push_back(B[i]);
        }

    }
    return soln;
}
int main() {
    vector<int> A = { 2,4,2,5,1};
    vector<int> a;
    a = sol(A);
}
