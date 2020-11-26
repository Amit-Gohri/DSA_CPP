//https://www.interviewbit.com/problems/count-and-say/

#include <bits/stdc++.h>
using namespace std;

string count_and_say(int n)
{
    vector<string> arr(n);
    string next, crt;
    int count = 1;
    arr[0] = "1";
    if (n == 1)
    {
        return arr[n - 1];
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            // arr[i] = fun(arr[i-1])
            crt = arr[i - 1];
            for (int j = 0; j < crt.size(); j++)
            {
                if (j + 1 < crt.size())
                {
                    if (crt[j] == crt[j + 1])
                    {
                        count++;
                    }
                    else
                    {
                        string str;
                        stringstream ss;
                        ss << count;
                        ss >> str;
                        next += str;
                        next += crt[j];
                        count = 1;
                    }
                }
                else
                {
                    //insert 1 and crt[j]
                    next += '1' + crt[j];
                }
            }
            arr[i] = next;
        }
    }
    return arr[n - 1];
}

int main(){
    cout << count_and_say(4);
}