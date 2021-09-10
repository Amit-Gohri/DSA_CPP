// https://www.interviewbit.com/problems/fraction/
#include <bits/stdc++.h>
using namespace std;

string fraction(int A, int B)
{
    string result;
    int ans;
    ans = A / B;
    //calculate sign 
    int sign = (A < 0) ^ (B < 0) ? -1 : 1;
 
    A = abs(A);
    B = abs(B);
    if (sign == -1)
        result += "-";



    to_string(ans);
    result.append(to_string(ans));


    if (A % B == 0)
    {
        return result;
    }
    else
    {
        result.push_back('.');
        unordered_map<int, int> umap;
        //rem,index
        int rem = A % B;
        while (umap.find(rem) == umap.end() && rem > 0)
        {
            umap[rem] = result.size();

            //push the quotient
            rem = rem * 10;
            result.append(to_string(rem / B));
            //calculate new remainder
            rem = (rem ) % B;
        }
        if (umap.find(rem) != umap.end() && rem > 0)
        {
            result += ")";
            result.insert(umap[rem], "(");
        }
        return result;
    }
}
//failing for one test case due to abs(A) out of range 
int main(){
    cout << fraction(-2147483648,-1);
}