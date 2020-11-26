//https://www.interviewbit.com/problems/longest-arithmetic-progression/

#include<bits/stdc++.h>
using namespace std;

int LAP(vector<int> A)
{
    int ans = 0;
    int size = A.size();
    if (size == 0)
    {
        return 0;
    }
    vector<int> len(size, 1);
    vector<vector<int>> possible_cdiff(size, vector<int>(size, 0));
    len[0] = 1;
    int cd;
    for (int i = 1; i < size; i++)
    {
        for (int j = i-1; j >=0; j--)
        {
            //calculate cd
            cd = A[i] - A[j];
            //check possibility
            if (binary_search(possible_cdiff[j].begin(),possible_cdiff[j].end(),cd))
            {
                len[i] = max(len[j] + 1, len[i]);
            }
            else
            {
                len[i] = max(2,len[i]);
            }
            possible_cdiff[i].push_back(cd);
            
            //update possible_cdiff
            //update len array
            //proceed ahead
        } 
    }
    for (int i = 0; i < size; i++)
    {
        ans = max(ans, len[i]);
    }
    return ans;
}

int main()
{
    cout << LAP({9, 4, 7, 2, 10});
}