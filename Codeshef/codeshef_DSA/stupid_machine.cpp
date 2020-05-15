#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> inp(N);
        stack<int> s;
        int p;
        for (int i = 0; i < N; i++)
        {
            cin >> inp[i];
            if (inp[i]<s.top())
            {
                s.push(i);
                p = i;
            }
            else
            {
                s.push(p);
            }
            
            
        }
        
        
    }
    
}