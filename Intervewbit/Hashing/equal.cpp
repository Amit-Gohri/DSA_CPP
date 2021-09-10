// https://www.geeksforgeeks.org/find-four-elements-a-b-c-and-d-in-an-array-such-that-ab-cd/
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

vector<int> equal(vector<int> A)
{
    vector<vector<int>> sol;
    
    unordered_map<int, pair<int, int>> umap;

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            int sum = A[i] + A[j];
            if (umap.find(sum) == umap.end())
            {
                umap[sum] = make_pair(i, j);

            }
            else
            {
                //sum already present in the hash
                pair<int, int> pp = umap[sum];
                //need to check common
                if (pp.first == i || pp.second == j ||)
                {

                }
                else
                {
                    vector<int> ans;
                    ans.push_back(pp.first);
                    ans.push_back(pp.second);
                    ans.push_back(i);
                    ans.push_back(j);
                    
                    sol.push_back(ans);
                    
                }


            }


        }
    }
    sort(sol.begin(), sol.end());
    return sol[0];
}
int main() {
    vector<int> ans = equal({ 3, 4, 7, 1, 2, 9, 8 });
}