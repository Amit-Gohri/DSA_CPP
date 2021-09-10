// https://www.interviewbit.com/problems/distinct-numbers-in-window/
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

vector<int> solution(vector<int> A, int B)
{
    unordered_map<int, int> map;
    int dist_count(0);
    vector<int> ans;
    for (int i = 0; i < B && i < A.size(); i++)
    {
        if (map.find(A[i]) == map.end())
        {
            map[A[i]] = 1;
            dist_count++;
        }
        else
        {
            map[A[i]]++;
        }
    }
    ans.push_back(dist_count);
    for (int j = B; j < A.size(); j++)
    {
        if (map[A[j - B]] == 1)
        {
            dist_count--;
            map[A[j - B]]--;
        }
        else
        {
            map[A[j - B]]--;
        }
        if (map.find(A[j]) == map.end())
        {
            map[A[j]] = 1;
            dist_count++;
        }
        else
        {
            if (map[A[j]] == 0) dist_count++;
            map[A[j]]++;
        }
        ans.push_back(dist_count);
    }
    return ans;
}


int main() {
    vector<int> ans = solution({ 2, 7, 7, 81, 81 }, 1);
    cout << ans[0];
}