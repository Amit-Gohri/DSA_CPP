//https://www.interviewbit.com/problems/rain-water-trapped/

#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>

using namespace std;

void pv(vector<int>& A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}

int trap(vector<int> A)
{
    vector<int> left_mx(A.size());
    vector<int> right_mx(A.size());
    int temp(0); // for holding max and min values
    for (int i = 0; i < A.size(); i++)
    {
        left_mx[i] = temp;
        if (A[i] > temp)
        {
            temp = A[i];
        }
    }
    temp = 0;
    for (int i = A.size() - 1; i > -1; i--)                         //0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 
    {
        right_mx[i] = temp;
        if (A[i] > temp)
        {
            temp = A[i];
        }
    }
    int area(0);
    for (int i = 0; i < A.size(); i++)
    {
        if (min(left_mx[i], right_mx[i]) > A[i]) area += min(left_mx[i], right_mx[i]) - A[i];
    }
    return area;

}

int main() {
    ios_base::sync_with_stdio(false);   //to turn off synchronisation
    cin.tie(NULL);                      //related to stream flush
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int N;
    //     cin >> N;
    //     while (N--)
    //     {

    //     }

    // }
    cout << trap({ 1, 2 });
}
