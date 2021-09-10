// https://www.youtube.com/watch?v=bTauscvOymA

#include<bits/stdc++.h>
using namespace std;

vector<int> findnum(vector<int> &A)
{
    vector<int> ans;
    int xall(0);
    unordered_map<int, int> map;
    for (int i = 0; i < A.size(); i++)
    {
        map[A[i]] = 1;
        xall = xall ^ A[i];
    }

    for (int i = 0; i < A.size(); i++)
    {
        int a = xall ^ A[i];
        if (map.find(a) != map.end())
        {
            ans.push_back(A[i]);
            ans.push_back(a);
        }
        
    }

    return ans;
}