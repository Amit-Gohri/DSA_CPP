//https://www.interviewbit.com/problems/multiply-strings/
#include<bits/stdc++.h>
using namespace std;

string multiply(string A, string B){
    int carry(0);
    string ans = "";
    int k = 0;
    int count(0);
    if(A=="0" || B=="0") return "0";
    for (int i = A.size() - 1; i >= 0; i-- && count++)
    {
        carry = 0;
        k = ans.size() - 1 - count;
        for (int j = B.size() - 1; j >= 0; j--)
        {

            int a = (A[i] - '0') * (B[j] - '0') + carry;
            if (k < 0)
            {

                ans.insert(0, to_string(a % 10));
                a = a / 10;
                carry = a % 10;
            }
            else
            {
                a = a + (ans[k]-'0');
                ans[k] = a % 10 + '0';
                a = a / 10;
                carry = a % 10;
                k--;
                // ans[k] = (a % 10 + (ans[k] - '0') + carry) % 10 + '0';
                // a = a / 10;
                // carry = a % 10;
            }
        }
        //if carry non zero
        if (carry) {
            ans.insert(0, to_string(carry));
        }
    }
    string ans1 = "";
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i]!='0')
        {
            return ans.substr(i, ans.size() - 1);
        }
        
    }
    
    return ans;
}

int main(){
    cout << multiply("7", "5");
}