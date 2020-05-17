#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<long long> inp(N);
        stack<long long> s;
        int p;
        long long token(0);
        for (int i = 0; i < N; i++)
        {
            cin >> inp[i];
            if (s.empty() || inp[i] < inp[s.top()])
            {
                s.push(i);
                p = i;
            }
            else
            {
                s.push(p);
            }
        }
        // stack formed
        int t(0);
        while (!s.empty())
        {
            
            token += s.size() * (inp[s.top()]-t);
            int m = s.size() - s.top();
            t = inp[s.top()];
            for (int i = 0; i < m; i++)
            {
                s.pop();
            }
        }
        cout << token << endl;
    }
}