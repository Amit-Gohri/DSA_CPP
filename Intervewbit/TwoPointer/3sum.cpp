//https://www.interviewbit.com/problems/3-sum/
#include <bits/stdc++.h>
using namespace std;

//doubt
// why two pointers move in one directinn only
int threesome(vector<int> A, int B)
{
    sort(A.begin(), A.end());
    int min_diff(INT_MAX), sum;
    //O(n^2) time complexity
    //for every element solve two sum problem
    for (int i = 0; i < A.size(); i++)
    {
        // calculate two sum target - A[i]
        int target = B - A[i];
        for (int j = i + 1, k = A.size() - 1; j < A.size() && k > j;)
        {
            int diff = B - A[i] - A[j] - A[k];
            if (diff < min_diff)
            {
                min_diff = diff;
                sum = A[i] + A[j] + A[k];
            }
            //calculate two sum
            if (A[j] + A[k] > target)
            {
                k--;
            }
            else if (A[j] + A[k] < target)
            {
                j++;
            }
            else
            {
                return sum;
            }

            // calculate diff target - obtained result
            // store min of those differences
        }
    }
    return sum;
}