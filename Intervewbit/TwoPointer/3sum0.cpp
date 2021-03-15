//https://www.interviewbit.com/problems/3-sum-zero/
#include <bits/stdc++.h>
using namespace std;

//doubt
// why two pointers move in one directinn only when the array is sorted in this question
vector<vector<int>> threesome(vector<int> A)
{
    int B = 0;
    vector<vector<int>> ans;
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

                ans.push_back({i, j, k});
            }

            // calculate diff target - obtained result
            // store min of those differences
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> ans = threesome({1, -4, 0, 0, 5, -5, 1, 0, -2, 4, -4, 1, -1, -4, 3, 4, -1, -1, -3});
    for (auto i = ans.begin(); i < ans.end(); i++)
    {
        cout << (*i)[0];
    }
    
}