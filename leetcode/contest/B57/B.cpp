// https://leetcode.com/contest/biweekly-contest-57/problems/the-number-of-the-smallest-unoccupied-chair/

#include <bits/stdc++.h>
using namespace std;

int smallChair(vector<vector<int>> &times, int targetFriend)
{
    for (int i = 0; i < times.size(); i++)
    {
        times[i].push_back(i);
    }

    sort(times.begin(), times.end());

    vector<int> chair(times.size(), -1);

    int chair_number(-1);
    int loop_variable(0);

    for (int i = 0; i < times.size(); i++)
    {
        if (targetFriend == times[i][2])
        {
            loop_variable = i + 1;
        }
    }

    for (int i = 0; i < loop_variable; i++)
    {
        for (int j = 0; j < chair.size(); j++)
        {
            if (chair[j] == -1)
            {
                chair[j] = times[i][1];
                chair_number = j;
                break;
            }
            else
            {
                if (chair[j] <= times[i][0])
                {
                    chair[j] = times[i][1];
                    chair_number = j;
                    break;
                }
            }
        }
    }

    return chair_number;
}

