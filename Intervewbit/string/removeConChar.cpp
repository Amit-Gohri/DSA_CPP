//https://www.interviewbit.com/problems/remove-consecutive-characters/
#include <bits/stdc++.h>
using namespace std;

string solution(string A, int B)
{
    int count(0);
    for (int i = 0; i < A.size(); i++)
    {
        if (i == 0 || A[i] == A[i - 1])
        {
            count++;
            if (count == B)
            {

                A.erase(i - count + 1, count);
                i = i - count;
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    return A;
}

int main() {
    cout << solution("aabbccd", 2);
}