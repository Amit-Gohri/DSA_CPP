#include<bits/stdc++.h>
using namespace std;

int isThree(int n){
    //check if the number is prime or not
    //we need exactly three divisors
    int count(0);
    if (n<3)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            count++;
        }
        
    }
    if (count == 1)
    {
        return true;
    }
    return false;
}