//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/
#include <bits/stdc++.h>
using namespace std;

int removeDup(vector<int> A)
{
    // int len(0);
    // int size = A.size();
    // if (size < 3)
    // {
    //     return 2;
    // }
    // else
    // {
    //     int i(0), j(0),k(0);
    //     int count(0);
    //     while(j<A.size()){
    //         if (A[j] == A[j+k] && j+k < A.size())
    //         {
                
    //         }
    //         else
    //         {
    //             int fre = k - j;
    //             if (fre>=2)
    //             {
    //                 A[i] = A[j];
    //                 i++;
    //                 A[i] = A[j];
    //                 i++;
    //             }
    //             else
    //             {
                    
    //             }
                
    //             j = k;
    //         }

    //         k++;
    //     }
    // }
    int len = 2;
      int n = A.size();
      if(n <= 2)return n;
      for(int i = 2; i < n; i++){
         if( A[i] != A[len - 2] || A[i] != A[len - 1]){
            A[len] = A[i];
            len++;
         }
      }
      return len;
}