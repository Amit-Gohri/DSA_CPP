//https://www.interviewbit.com/problems/matrix-median/

// not solved( count += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin() -1;) cannot comprehend this line

#include <bits/stdc++.h>
using namespace std;

int matmed(vector<vector<int>> A)
{
    int min(INT_MAX), max(INT_MIN);
    int desired = (A.size() * A[0].size()) / 2;
    for (int i = 0; i < A.size(); i++)
    {
        // Finding the minimum element
        if (A[i][0] < min)
            min = A[i][0];

        // Finding the maximum element
        if (A[i][A[i].size() - 1] > max)
            max = A[i][A[i].size() - 1];
    }
    int mid(0);
    
    while (min < max)
    {
        mid = (max + min) / 2;
        
        int count(0);

        for (int i = 0; i < A.size(); i++)
        {
            count += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin() -1;
        }
        if (count < desired)
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    return mid;
}

int main()
{
    vector<vector<int>> A;
    cout << matmed({ {1, 3, 5}, {2, 6, 9}, {3, 5, 9} });
}
