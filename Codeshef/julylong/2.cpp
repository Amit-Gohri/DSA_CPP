// https://www.codechef.com/JULY20B/problems/CRDGAME

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>

using namespace std;

void pv(vector<int> &A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}
int sumOFint(int a)
{
    int sum(0);
    while (a)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false); //to turn off synchronisation
    cin.tie(NULL);                    //related to stream flush
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int scoreA(0), scoreB(0);
        while (N--)
        {
            int A, B;
            int sum_A, sum_B;

            cin >> A >> B;
            sum_A = sumOFint(A);
            sum_B = sumOFint(B);
            if (sum_A == sum_B)
            {
                scoreB++;
                scoreA++;
            }
            else
                sum_A > sum_B ? scoreA++ : scoreB++;
        }
        if (scoreA > scoreB)
        {
            cout << 0 << " " << scoreA << endl;
        }
        else if (scoreB > scoreA)
        {
            cout << 1 << " " << scoreB << endl;
        }
        else
        {
            cout << 2 << " " << scoreA << endl;
        }
    }
}
