//current visual studio code
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int result(0);
        int N;
        cin >> N;
        vector<int> inp(N);
        stack<int> s;
        int p;
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
        while (s.size() != 0) {
            {
                result += s.size() * inp[s.top()];
                for(int i = 0 ; i<s.top()+1 ; i++ )
                {
                    s.pop();
                }
            }
  

        }

    }
}