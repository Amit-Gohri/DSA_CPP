#include <bits/stdc++.h>
using namespace std;

bool isPrefix(string s, vector<string> words)
{
    bool ans(1);
    int ptr(0);
    for (int i = 0; i < words.size() and ptr < s.size(); i++)
    {
        //extract word
        string word = words[i];
        for (int j = 0; j < word.size(); j++)
        {

            if (ptr >= s.size() || word[j] != s[ptr])
            {
                return false;
            }
            ptr++;
        }
    }
    if (ptr<s.size())
    {
        return false;
    }
    
    return true;
}