//https://www.interviewbit.com/problems/longest-common-prefix/

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &A)
{
    int j = 0;
    char lcs;
    string ans = "";
    while (j>=0)
    {
        if (A[0].size() == j)
        {
            break;  
        }
        
        lcs = A[0][j]; //check empty
        for (int i = 0; i < A.size(); i++)
        {
            //check ai empty
            if(A[i][j] != lcs){
                j = -2;
            }
        }
        if(j>=0)ans += lcs;
        j++;// change j to break outer loop
    }
    return ans;
}

int main(){
    vector<string> a = {"amit", "amitgohri", "amih"};
    cout << longestCommonPrefix(a);
}