//https://www.interviewbit.com/problems/longest-palindromic-substring/
#include <bits/stdc++.h>
using namespace std;

string solution(string A)
{
    string crt_str = "", max_str = "";
    // for (int i = 0; i < A.size(); i++)
    // {
    //     int j(0);
    //     int len(1);
    //     while (j + i < A.size() && i - j >= 0)
    //     {
    //         if (A[i + j] == A[i - j])
    //         {
    //         }
    //         else
    //         {
    //             break;
    //         }
    //         crt_str = A.substr(i - j, 2 * j + 1);
    //         if (crt_str.size() > max_str.size())
    //         {
    //             max_str = crt_str;
    //         }
    //         j++;
    //     }
    // }
    bool b = 0;
    for (int i = 0, j = 0; i < A.size() && j < A.size();)
    {
        int k(0);
        while (i - k >= 0 && j + k < A.size())
        {
            if (A[i - k] != A[j + k])
            {
            
                break;
            }
            k++;
        }
        k--;
        crt_str = A.substr(i - k, j - i + 2 * k + 1);
        if (crt_str.size() > max_str.size())
        {
            max_str = crt_str;
        }
        if (b == 0)
        {
            j++;
            b = 1;
        }
        else
        {
            i++;
            b = 0;
        }
    }
    return max_str;
}

int main()
{
    cout << solution("aaaabcbaa");
}