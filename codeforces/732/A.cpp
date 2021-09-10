
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> A, B;
    vector<pair<int, int>> ans;
    int size(0);
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int array_value(0);
        cin >> array_value;
        A.push_back(array_value);
    }
    for (int i = 0; i < size; i++)
    {
        int array_value(0);
        cin >> array_value;
        B.push_back(array_value);
    }

    vector<int> diff(size);
    bool op_performed(0);
    int a(0);
    for (int i = 0; i < size; i++)
    {
        diff[i] = A[i] - B[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (diff[i] != 0)
        {
            op_performed = 1;
        }

        a += diff[i];
    }
    if (a != 0)
    {
        cout << -1<<endl;
    }

    else
    {
        if (!op_performed)
        {
            cout << 0<<endl;
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                if (diff[i]>0)
                {
                    for (int j = 0; j < diff[i]; j++)
                    {
                        ans.push_back({i, 0});
                    }
                    
                }
                
            }
            int l(0);
            for (int i = 0; i < size; i++)
            {
                if (diff[i]<0)
                {
                    for (int j = 0; j < abs(diff[i]); j++)
                    {
                        ans[l].second = i;
                        l++;
                    }
                    
                }
                
            }

            // print the ans;
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                
                cout << ans[i].first +1 << " " << ans[i].second+1 << endl;
            }
            
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}