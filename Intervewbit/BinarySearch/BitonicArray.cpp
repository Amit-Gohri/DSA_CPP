#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> &A)
{
    int start = 0;
    int end = A.size() - 1;
    if (A.size() == 1)
    {
        return 0;
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid != 0 && mid != A.size() - 1)
        {
            if (A[mid] > A[mid + 1] && A[mid] > A[mid - 1])
            {
                return mid;
            }
            else
            {
                //check for promising side and traverse there
                if (A[mid] > A[mid - 1] && A[mid] < A[mid - 1])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        else
        {
            if (mid == 0)
            {
                if (A[mid] > A[mid + 1])
                {
                    return mid;
                }
                else
                {
                    return -1;
                }
            }
            else
            {
                if (A[mid] > A[mid - 1])
                {
                    return mid;
                }
                else
                {
                    return -1;
                }
            }
        }
    }
}

// A : [ 1, 2, 3, 4, 5, 10, 9, 8, 7, 6 ]
// B : 5

int BinarySearchAscending(vector<int> &A, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (A[mid] == target)
        {
            return mid;
        }
        else
        {
            if (A[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int BinarySearchDescending(vector<int> &A, int target, int start, int end)
{

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (A[mid] == target)
        {
            return mid;
        }
        else
        {
            if (A[mid] < target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int searchBitonic(vector<int> A, int B)
{
    int peakIndex(0);
    peakIndex = findPeak(A);
    if (peakIndex != -1)
    {
        int searchAscending = BinarySearchAscending(A, B, 0, peakIndex);
        int searchDescending = BinarySearchDescending(A, B, peakIndex+1, A.size()-1);
        if (searchAscending != -1)
        {
            return searchAscending;
        }
        return searchDescending;
    }
    return -1;
}


int findPeak(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    if (nums.size() == 1)
    {
        return 0;
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid != 0 && mid != nums.size() - 1)
        {
            if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
            {
                return mid;
            }
            else
            {
                //check for promising side and traverse there
                if (nums[mid] > nums[mid - 1] && nums[mid] < nums[mid + 1])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        else
        {
            if (mid == 0)
            {
                if (nums
                [mid] > nums[mid + 1])
                {
                    return mid;
                }
                else
                {
                    return -1;
                }
            }
            else
            {
                if (nums[mid] > nums[mid - 1])
                {
                    return mid;
                }
                else
                {
                    return -1;
                }
            }
        }
    }
    return -1;
}