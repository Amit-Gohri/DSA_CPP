#include<bits/stdc++.h>
using namespace std;
int Lis(int ar[], int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        int max_lj(INT_MIN);
        for (int i = 0; i < n; i++)
        {
            int Li = Lis(ar, i);
            if(ar[i]<ar[n])
            {
                max_lj = max(max_lj, Li);
            }
            //compute l[i]
            //maintain max and check
        }
    }
    
    
}



int main()
{
    int ar[] = {1, 11, 2, 10, 4, 5, 2, 1};


}