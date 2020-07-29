#include<bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " : " << x << "\n"

vector<int> solve(int A, vector<int> &B)
{
    map<int, int> s;

    for (int i = 0; i < B.size(); i++)
        if (s[B[i]] != 0)
            s[B[i]] = min(s[B[i]], i);
        else
            s[B[i]] = i;
    int idx = min_element(B.begin(), B.end()) - B.begin();
    int mini = *min_element(B.begin(), B.end());
    int x = A / mini;
    vector<int> ans;
    for (int i = 0; i < x; i++)
        ans.push_back(mini);
    int sum = mini * x;
    int j = 0;
    for (int i = 0; i < idx; i++)
    { //  deb(sum);
        while (j < ans.size() && sum + B[i] - mini <= A)
        {
            ans[j] = B[i];
            sum = sum + B[i] - mini;
            //deb(sum);
            j++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = s[ans[i]];
    }
    return ans;
}