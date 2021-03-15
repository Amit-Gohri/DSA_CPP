//https://www.interviewbit.com/problems/max-continuous-series-of-1s/
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> A, int B)
{
    int count(0);
    vector<int> ans;
    int len(0), max_len(INT_MIN), idx(0);
    for (int i = 0; i < A.size(); i++)
    {
        len = 0, count = 0;
        for (int j = i; j < A.size(); j++)
        {
            if (A[j] == 0)
            {
                if (count < B)
                {
                    count++;
                    len++;
                }

                else
                {
                    break;
                }
            }
            else
            {
                len++;
            }
        }
        if (max_len <= len)
        {
            max_len = max(max_len, len);
            idx = i;
        }
    }
    for (int i = 0; i < max_len; i++)
    {
        ans.push_back(idx);
        idx++;
    }
    return ans;
}

vector<int> solution1(vector<int> A, int B)
{
    int count(0);
    vector<int> ans;
    int len(0), max_len(INT_MIN);
    int i(0), j(0);
    int idx(0);
    while (j < A.size())
    {

        if (count < B)
        {
            if (A[j] == 0)
            {
                count++;
            }

            j++, len++;

        }
        else if (count > B)
        {

            if (A[i] == 0)
            {
                count--;
            }
            i++, len--;
        }
        else
        {
            if (A[j] == 0)
            {
                if (A[i] == 0)
                {
                    count--;
                }
                i++, len--;
            }
            else
            {
                j++;
                len++;
            }
            
        }

        //update window size here
        if (len>max_len)
        {
            max_len = len;
            idx = i;
        }
        
    }
    for (int i = 0; i < max_len; i++)
    {
        ans.push_back(idx);
        idx++;
    }
    return ans;
}
int main()
{
    cout << solution1({0, 1, 1, 0, 1, 0, 0, 1}, 2)[0];
}

