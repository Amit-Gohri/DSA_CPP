//https://www.interviewbit.com/problems/compare-version-numbers/
#include<bits/stdc++.h>
using namespace std;

int solution(string A, string B){
    int size = max(A.size(), B.size());
    int i(0), j(0);
    while (i < A.size() || j < B.size())
    {
        int numA(0), numB(0);
        //while encounter dot in A
        while (A[i]!='.' && i<A.size())
        {
            numA = numA * 10 + (A[i] - '0');
            i++;
        }

        //while encountern dot in B
        while (B[j]!='.' && j<B.size())
        {
            numB = numB * 10 + (B[j] - '0');
            j++;
        }

        //compare A,B
        //return result or continue
        if (numA>numB)
        {
            return 1;
        }
        else if (numA<numB)
        {
            return -1;
        }
        else if (i>=A.size()&&j>=B.size())
        {
            return 0;
        }

        i++;
        j++;

    }
}
int main(){
    cout<<solution("13", "1.23");
}