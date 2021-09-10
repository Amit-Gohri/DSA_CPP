// https://www.interviewbit.com/courses/programming/topics/binary-search/#problems

#include <bits/stdc++.h>
using namespace std;

int solution(const vector<int> A, int B)
{
    // B = target value
    int start = 0;
    int end = A.size() - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (A[mid] >= A[start])
        {
            //in  the first increasing sequence
            if (A[mid] == B)
            {
                return mid;
            }
            
            if (A[mid] > B)
            {
                if (A[start] > B)
                {
                    //go to right
                    start = mid + 1;
                }
                else
                {
                    //go to left
                    end = mid - 1;
                }
            }
            else
            {
                //go to right
                start = mid + 1;
            }
        }
        else
        {
            if (A[mid] == B)
            {
                
                return mid;
            }
            
            if (B > A[mid])
            {
                if (A[end] > B)
                {
                    // go to right()
                    start = mid + 1;
                }
                else
                {
                    //go to left
                    end = mid - 1;
                }
            }
            else
            {
                // go to left
                end = mid - 1;
            }
            
        }
    }
    return -1;
}

int main(){
    cout << solution({4, 5, 6, 7, 0, 1, 2, 3}, 4);
}