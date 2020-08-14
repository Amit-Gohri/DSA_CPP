// https://www.interviewbit.com/problems/painters-partition-problem/

#include<bits/stdc++.h>
using namespace std;

int getMin(vector<int>& A)
{
    int mx(INT_MIN);
    for (int i = 0; i < A.size(); i++)
    {
        mx = max(mx, A[i]);
    }
    return mx;
}

int getMax(vector<int>& A)
{
    //return sum of the array
    int sum(0);
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
    }
    return sum;
}

int minPainter(vector<int>& A, int time)
    {
    int no_of_painters(1);
    int time_per_painter(0);
    for (int i = 0; i < A.size(); i++)
    {
        time_per_painter += A[i];
        if (time_per_painter > time)
        {
            no_of_painters++;
            
            time_per_painter = A[i];
        }
        
        
    }
        return no_of_painters;

}

int painters_partition(vector<int> A, int B, int C)
{
    long long min_time = getMin(A);
    long long max_time = getMax(A);
    int min_painters(0);
    
    while (min_time < max_time)
    {
        int mid = (min_time + max_time) / 2;
        min_painters = minPainter(A, mid);
        if (min_painters > B)
        {
            min_time = mid + 1;
        }
        else
        {
            max_time = mid;
        }
    }
    return min_time*C;
}

int main()
{
    cout << painters_partition({ 1,8,11,3  }, 2, );
}