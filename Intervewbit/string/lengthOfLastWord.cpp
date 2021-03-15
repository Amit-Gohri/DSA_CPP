#include<bits/stdc++.h>
using namespace std;

int sol(string A){
    // int len(0);
    // for (int i = 0; i < A.size(); i++)
    // {
    //     if (A[i] == ' ')    
    //     {
    //         len = 0;
    //     }
    //     else
    //     {
    //         len++;
    //     }
        
    // }
    // return len;
    int len(0);
    int i = A.size() - 1;
    while(A[i]==' '){

        i--;
    }
    while (A[i] != ' ')
    {
        len++;
    }
    
    for (int i = A.size()-1; i >=0 ; i--)
    {
        if (A[i]==' ')
        {
            
        }
        else
        {
            len++;
        }
        
    }
    
}