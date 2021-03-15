//https://www.interviewbit.com/problems/zigzag-string/
#include <bits/stdc++.h>
using namespace std;

string convert(string A, int row)
{
    string ans = "";
    for (int i = 1; i <= row; i++)
    {
        int up = 2 * (i - 1);
        int down = 2 * (row - i);
        bool b(1);
        for (int j = i - 1; j < A.size();)
        {
            ans.push_back(A[j]);
            if (i==1)
            {

                j += down;

            }
            else if (i==row)
            {
                j += up;
            }
            if (b && i!=1 && i!=row)
            {
                j += down;
                b = 0;
            }
            else if(i!=1 && i!=row)
            {
                j += up;
                b = 1;
            }
        }
    }
    return ans;
}

int main(){
    cout << convert("ABCD", 2);
}