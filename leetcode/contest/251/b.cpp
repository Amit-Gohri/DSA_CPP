// https://leetcode.com/contest/weekly-contest-251/problems/largest-number-after-mutating-substring/
#include <bits/stdc++.h>
using namespace std;

string maximumNumber(string num, vector<int> &change)
{
    int substring_started(0);
    for (int i = 0; i < num.size(); i++)
    {
        if (change[num[i] - 48] >= num[i] - 48)
        {
            //start the substring
            if (change[num[i] - 48] == num[i] - 48 && substring_started == false)
            {
            }

            else
            {
                substring_started = true;
                num[i] = change[num[i] - 48] + 48;
            }
        }
        else
        {
            if (substring_started)
            {
                break;
            }
        }
    }
    return num;
}

// "214010"
// [6,7,9,7,4,0,3,4,4,7]

// Output:
// "974010"
// Expected:
// "974676"