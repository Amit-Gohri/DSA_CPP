//https://leetcode.com/contest/weekly-contest-202/problems/three-consecutive-odds/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 != 0 && i <= arr.size() - 3)
            {
                if (arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0)
                {
                    return 1;
                }
                else
                {
                    continue;
                }
            }
        }
        return 0;
    }
};

int main()
{
    Solution s;
    vector<int> A = {1,2,34,3,4,5,7,23,12};
    cout << s.threeConsecutiveOdds(A);
}