//https://www.interviewbit.com/problems/pair-with-given-difference/
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> A, int B)
{
    sort(A.begin(), A.end());
    if (A.size()==0||A.size()==1) 
    {
        return 0;
    }
    
    int i = 0, j = 1;
    while (i < A.size() && j < A.size())
    {
        if (abs(A[j] - A[i]) < abs(B))
        {
            j++;
        }
        else if (abs(A[j] - A[i]) > abs(B))
        {
            if (i == j-1)
            {
                i++, j++;
            }
            
            else
            {
                i++;
            }
            
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    cout << solution({-259, -825, 459, 825, 221, 870, 626, 934, 205, 783, 850, 398}, -42);
}