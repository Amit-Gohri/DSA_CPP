//https://www.interviewbit.com/problems/amazing-subarrays/

#include <bits/stdc++.h>
using namespace std;

int amazingsubarray(string A)
{
    int size = A.size();
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        int count;
        if (A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U' || A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            count = size - i;
            ans = (ans % 10003 + count % 10003) % 10003;
        }
    }
    return ans;
}
int main(){
    cout<<amazingsubarray("ABEC");
}