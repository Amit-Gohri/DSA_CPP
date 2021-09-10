//https://codeforces.com/contest/1514/problem/A

#include <bits/stdc++.h>
using namespace std;

int check(int A)
{
    double a = sqrt(A);
    int b = sqrt(A);
    if(b-a == 0.0)
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<int> v{size};
        for (int i = 0; i < size; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (check(v[i]))
            {
                
            }
            
        }
    }
}