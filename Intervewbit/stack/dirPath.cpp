// https://www.interviewbit.com/problems/simplify-directory-path/

#include<bits/stdc++.h>
using namespace std;

string simplify(string A){
    stack<string> s;
    int dotCount(0);
    int index(0);
    while (index<A.size())
    {
        if (A[index] != '/')
        {
            string folder;
            while (A[index] != '/' || index<A.size())
            {
                folder += A[index];
                index++;
            }
            if (folder == "..")
            {
                s.pop();
                
            }
            if (folder == ".")
            {
                //do nothing
            }
            
            else s.push(folder);

        }
        else index++;
    }
    return s.top();
}

int main(){
    cout << simplify("/../");
}