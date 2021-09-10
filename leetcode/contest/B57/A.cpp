// https://leetcode.com/contest/biweekly-contest-57/problems/check-if-all-characters-have-equal-number-of-occurrences/

#include<bits/stdc++.h>
using namespace std;

bool goodString(string s){
    unordered_map<char, int> map;
    for (int i = 0; i < s.size(); i++)
    {
        if (map.find(s[i]) == map.end())
        {
            map[s[i]] = 0;
        }
        else
        {
            map[s[i]]++;
        }
        
        
    }
    int count = map[s[0]];
    for (auto x: map)
    {
        if (x.second != count)
        {
            return false;
        }
        
    }
    return true;
}

int main(){
    cout << goodString("abacb");
}