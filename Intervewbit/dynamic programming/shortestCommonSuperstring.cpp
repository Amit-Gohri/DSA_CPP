// https://www.interviewbit.com/old/problems/shortest-common-superstring/
#include<bits/stdc++.h>
using namespace std;

int findOverlap(string A, string B){
    int maxlen(INT_MIN);
    
    for (int i = 0; i < min(A.size(),B.size()); i++)
    {
        string suba(A, i, i + 1);
        string subb(B, B.size() - i, i + 1);
        if (suba.compare(subb) == 0)
        {
            int size = suba.size();
            maxlen = max(size, maxlen);
        }
        
    }
    for (int i = 0; i < min(A.size(), B.size()); i++)
    {
        string suba(A, A.size() - i, i + 1);
        string subb(B, i, i + 1);
        if (suba.compare(subb) == 0)
        {
            int size = suba.size();
            maxlen = max(size, maxlen);
        }
    }
    //return the length max overlap possible
    //also return the prefix or suffix for A
    return maxlen;
}

void merge(vector<string> temp){
    //for every string we have to find suffix and store max
    pair<int, pair<int, int>> p;
    //overlap, {idx,idx}
    int overlap(INT_MIN);
    for (int i = 0; i < temp.size(); i++)
    {
        for (int j = i+1; j < temp.size(); j++)
        {
            overlap = findOverlap(temp[i], temp[j]);
        }
        
    }
    

}

string scs(vector<string> A){
    vector<string> temp = A;
    // find two most overlapping substring where prefix of one is equal to prefix of other
    // merge them 
    // repeat the process

}
//taking time to code
    