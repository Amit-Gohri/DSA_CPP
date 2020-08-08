//https://www.interviewbit.com/problems/first-non-repeating-character-in-a-stream-of-characters/

#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vvi vector<vector<int>>

using namespace std;

void pv(vector<int> A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}

//solve function
string sol(string A)
{
    int arr[26]{ 0 };
    string s;
    vector<char> ans;
    int first_non_repeat(0);
    for (int i = 0; i < A.size(); i++)
    {
        arr[A[i] - 97]++;
        //check count of crt element, if it is 0 then first_non_repeat remais the same
        if (arr[A[first_non_repeat] - 97] == 1)
        {
            s.push_back(A[first_non_repeat]);
        }
        else
        {
            while (arr[A[first_non_repeat] - 97] > 1)
            {
                if (first_non_repeat == i)
                {
                    s.push_back('#');
                    first_non_repeat++;
                    break;
                }
                first_non_repeat++;
            }
            if (first_non_repeat < i) s.push_back(A[first_non_repeat]);
        }
    }
    return s;
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
    string a = sol({ "xxikrwmjvsvckfrqxnibkcasompsuyuogauacjrr" });
    for (char i : a)
    {
        cout << i << " ";
    }
}
