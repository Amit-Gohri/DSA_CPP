//  https://www.interviewbit.com/problems/diffk-ii/
#include<bits/stdc++.h>
using namespace std;
int diff(vector<int> A, int B){
    unordered_map<int, int> map;
    for (int i = 0; i < A.size(); i++)
    {
        if (map.find(abs(B-A[i])) == map.end())
        {
            map[A[i]] = i;
        }
        else
        {
            return 1;
        }
                
    }
    return 0;
}