//https://leetcode.com/contest/weekly-contest-251/problems/sum-of-digits-of-string-after-convert/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getLucky(string s, int k)
    {
        string stringToInt = "";
        int transform(0);
        //convert the string to int
        for (int i = 0; i < s.size(); i++)
        {
            stringToInt += to_string(s[i] - 96);
        }
        //transform k times

        for (int i = 0; i < k; i++)
        {
            transform = 0;
            for (int j = 0; j < stringToInt.size(); j++)
            {
                transform += stringToInt[i]-48;
                //change string to int to crt string of transform

                
            }
            stringToInt = to_string(transform);
        }

        return transform;
    }
};