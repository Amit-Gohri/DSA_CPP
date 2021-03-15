//https://www.interviewbit.com/problems/power-of-2/
#include <bits/stdc++.h>
using namespace std;

string divide(string A)
{
    string q = "";
    if ((A[A.size() - 1] - '0') % 2 != 0) //&& size>0
    {
        return q;
    }
    else
    {
        int d(0);
        for (int i = 0; i < A.size(); i++)
        {
            d = d * 10 + A[i] - '0';
            if (d < 2)
            {
                q.push_back('0');
                // d = d * 10 + A[i] - '0';
            }
            else
            {
                //d = d * 10 + A[i] - '0';
                q.push_back(d / 2 + '0');
                d = d % 2;
            }
        }
        return q;
    }
}

int power2(string A)
{
    bool divisible(1);
    if (A == "1" || A == "0")
    {
        return 0;
    }
    
    while (A != "1")
    {
        string q = divide(A);
        //remove zero from q 
        for (int i = 0; i < q.size(); i++)
        {
            if (q[i]!='0')
            {
                q = q.substr(i, q.size() - i);
                break;
            }
            
        }
        
        A = q;
        if (q.size() > 0)
        {
            continue;
        }
        else
        {
            return 0;
        }
        
    }
    return 1;
}

int main() {
    cout << power2("64");
}