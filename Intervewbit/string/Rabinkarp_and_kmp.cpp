#include <bits/stdc++.h>
using namespace std;

//rabin
bool rabinKarp(string s, string pat)
{
    int mod = 1e9 + 7;
    int pathash = 0;
    int shash = 0;
    int hashConst = 3;
    for (int i = 0; i < pat.size(); i++)
    {
        pathash = (pathash % mod + hashConst) % mod;
        pathash += pat[i] - 'a' + 1;
    }
    for (int i = 0; i < pat.size(); i++)
    {
        shash = (shash % mod + hashConst) % mod;
        shash += s[i] - 'a' + 1;
    }

    for (int i = 0; i < s.size() - pat.size() + 1; i++)
    {
        if (shash == pathash)
        {
            //match found
            string a(s, i, pat.size());
            if (a.compare(pat) == 0)
            {
                return true;
            }
        }
        else
        {
            //compute new hash
            shash = ((shash - (s[i] % mod * ((int)pow(hashConst, pat.size() - 1)) % mod) % mod) % mod * hashConst % mod) % mod + s[i + pat.size()] - 'a' + 1;
        }
    }
    return false;
}

bool kmp(string s, string goal)
{
    vector<int> lps;
    //build the lps array
    // ababcda
    int i = 0;
    lps.push_back(0);

    for (int j = 1; j < goal.size(); j++)
    {
        if (goal[j] == goal[i])
        {
            lps.push_back(i + 1);
            i++;
        }
        else
        {
            i = 0;
            if (goal[i] == goal[j])
            {
                lps.push_back(i + 1);
                i++;
            }
            else
            {
                lps.push_back(0);
            }
        }
    }

    i = 0;
    int j = 0;
    while (j < goal.size() and i < s.size())
    {
        if (goal[j] == s[i])
        {
            i++;
            j++;
        }
        else
        {
            //move j to lps[j]
            if (j)
                j = lps[j - 1];
            else
            {
                i++;
            }
        }
    }
    if (j == goal.size())
    {
        return 1;
    }

    return 0;
}