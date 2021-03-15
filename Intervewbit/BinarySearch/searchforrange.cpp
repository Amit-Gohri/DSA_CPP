//https://www.interviewbit.com/problems/search-for-a-range/
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> A, int B)
{
    //A is sorted arr
    vector<int> ans;
    if (binary_search(A.begin(),A.end(),B))
    {
        ans.push_back(lower_bound(A.begin(), A.end(), B) - A.begin());
        ans.push_back(upper_bound(A.begin(), A.end(), B) - A.begin() - 1);
        return ans;
    }
    else
    
        return {-1, -1};
    }
    
}

int main()
{
}