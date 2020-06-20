#include <bits/stdc++.h>
using namespace std;
int compare(int A,int B){
    return A > B;
}
//if return 1 then A>B else opp B>A
 
int main()
{
    vector<int> A = {1, 2, 3, 4, 5};
    sort(A.begin(), A.end(), compare);
}
