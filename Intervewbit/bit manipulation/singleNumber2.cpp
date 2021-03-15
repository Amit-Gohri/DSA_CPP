//https://www.interviewbit.com/problems/single-number-ii/
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> A)
{
    int arr[64] = { 0 };
    int count(0);
    int ans(0);
    for (int i = 0; i < 64; i++)
    {
        count = 0;
        for (int j = 0; j < A.size(); j++)
        {
            if (A[j] & (1 << i))
            {
                count++;
            }
        }
        arr[i] = count;
    }
    for (int i = 63; i >= 0; i--)
    {
        if (arr[i] % 3 == 0)
        {
            ans = ans * 2 + 0;
        }
        else
        {
            ans = ans * 2 + 1;
        }
    }
    return ans;
}

int main() {
    cout << solution({ 1, 2, 4, 3, 3, 2, 2, 3, 1, 1 });
}