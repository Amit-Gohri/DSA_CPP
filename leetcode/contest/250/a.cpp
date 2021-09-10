// https://leetcode.com/contest/weekly-contest-250/problems/maximum-number-of-words-you-can-type/

#include <bits/stdc++.h>
using namespace std;

int solution(string text, string brokenLetters)
{
    text += " ";
    int canBeTyped(1);
    int count(0);
    unordered_map<int, int> map;
    for (int i = 0; i < brokenLetters.size(); i++)
    {
        map[brokenLetters[i]] = 0;
    }
    
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
        {
            //go to next word
            if (canBeTyped)
            {
                count++;
            }
            canBeTyped = true;
        }
        else
        {
            if (map.find(text[i]) != map.end())
            {
                canBeTyped = false;
            }
            
        }
    }
    
    return count;
}

int main(){
    cout << solution("leet code", "lt");
}