//https://www.interviewbit.com/problems/redundant-braces/

#include<bits/stdc++.h>
using namespace std;


int braces(string A) {
    int operato= 0;
    int brace = 0;
    int len = A.length();
    for(int i =0 ; i<len ; i++){
        if(A[i]=='+' || A[i]== '-' || A[i]==  '*' || A[i]==  '/'){
            operato++;
        }
        if(A[i] == '('){
            if(A[i+1]!='+' && A[i+1]!= '-' && A[i+1]!=  '*' && A[i+1]!=  '/' && A[i+1]!=  '(' && A[i+1]!=  ')'){
                if(A[i+2]==')' ) return 1;
                else brace ++;
            }
            else brace++;
        }
    }
    if(operato>=brace) return 0;
    else return 1;
}
