//https://www.interviewbit.com/problems/intersection-of-sorted-arrays/
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> A, vector<int> B)
{
    int i(0), j(0);
    vector<int> ans;
    while (i < A.size() && j < B.size())
    {
        if (A[i] > B[j])
        {
            j++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else
        {
            ans.push_back(A[i]);
            i++, j++;
        }
    }
    return ans;
}

int main(){
    vector<int> a;
    a = solution({1, 2, 3, 3, 4, 5, 6}, {3, 3, 5});
}