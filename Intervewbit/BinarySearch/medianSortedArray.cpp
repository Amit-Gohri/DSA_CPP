// https://www.interviewbit.com/problems/median-of-array/

// pending to solve corner cases
#include <bits/stdc++.h>
using namespace std;

double median(vector<int> nums1, vector<int> nums2)
{
    int lo = 0, hi = nums1.size() - 1;
    //consider the case for odd number of elements
    while (lo <= hi)
    {
        //we are selecting i and j is chosen automatically to match number of elements
        int mid = (hi + lo) / 2;
        int i, j;
        i = mid;
        j = ((nums1.size() + nums2.size()) / 2) - mid - 2;
        if (nums1[i] < nums2[j + 1] && nums2[j] < nums1[i + 1])
        {
            if ((nums1.size() + nums2.size()) % 2 == 0)
            {
                double med(0);
                med = (max(nums1[i], nums2[j]) + min(nums1[i + 1], nums2[j + 1])) / 2.0;
                return med;
                //median found
            }
            else
            {
                return max(nums1[i], nums2[j]);
            }

        }
        else
        {
            if (nums1[i] > nums2[j + 1])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
    }
    return 0.0;
}
    
int main() {
    cout << median({ 1, 4, 5 }, { 2, 3 });
}