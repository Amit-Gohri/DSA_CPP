#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin >> t;
    next_case:
    while (t--)
    {
        int arr[2] = {}; //5,10,15 denomination
        int money;
        int N;
        cin >> N;
        int rtrn;
        //bool all_served = true;
        while (N--)
        {
            cin >> money;
            if (money == 5)
                arr[0]++;
            else if (money == 10)
                arr[1]++;
            rtrn = money - 5;
            if (rtrn == 5)
            {
                if (arr[0] == 0)
                {
                    cout << "NO" << endl;
                    goto next_case;
                    //all_served = 0;
                }
                else
                {
                    arr[0]--;
                }
            }
            else if (rtrn == 10)
            {
                if (arr[1] != 0)
                {
                    arr[1]--;
                }
                else
                {
                    if (arr[0] < 2)
                    {
                        cout << "NO" << endl;
                        goto next_case;
                        //all_served = 0;
                    }
                    else
                    {
                        arr[0] += -2;
                    }
                }
            }
        }
        cout << "YES" << endl;
    }
}





#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin >> t;
    //next_case:
    while (t--)
    {
        int arr[2] = {}; //5,10,15 denomination
        int money;
        int N;
        cin >> N;
        int rtrn;
        bool all_served = true;
        while (N--)
        {
            cin >> money;
            if (money == 5)
                arr[0]++;
            else if (money == 10)
                arr[1]++;
            rtrn = money - 5;
            if (rtrn == 5)
            {
                if (arr[0] == 0)
                {
                    //cout << "NO" << endl;
                    //goto next_case;
                    all_served = 0;
                }
                else
                {
                    arr[0]--;
                }
            }
            else if (rtrn == 10)
            {
                if (arr[1] != 0)
                {
                    arr[1]--;
                }
                else
                {
                    if (arr[0] < 2)
                    {
                        //cout << "NO" << endl;
                        //goto next_case;
                        all_served = 0;
                    }
                    else
                    {
                        arr[0] += -2;
                    }
                }
            }
        }
        if(all_served){
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
