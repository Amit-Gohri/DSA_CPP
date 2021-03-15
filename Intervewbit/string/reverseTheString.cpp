//https://www.interviewbit.com/problems/reverse-the-string/

#include<bits/stdc++.h>
using namespace std;

string reverse(string A){
    stack<char> q;
    int size = A.size();
    string ans ;
    for (int i = size - 1; i >= 0; i--)
    {
        if(A[i] == ' ' || i == 0)
        {
            if(i==0) q.push(A[i]);
                
            

            while (!q.empty())
            {
                ans.push_back(q.top());
                q.pop();
            }
            if(i!=0) ans.push_back(' ');
            
        }
        else if (A[i] != ' ')
        {
            q.push(A[i]);
        }
        
    }
    return ans;
}
int main(){
    string A;
    cout << A << endl;
    
}