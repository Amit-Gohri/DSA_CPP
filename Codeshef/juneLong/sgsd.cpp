#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); //to turn off synchronisation
	cin.tie(NULL);					  //related to stream flush
	int t;
	cin >> t;
	while (t--)
	{
		int N;
		cin >> N;
		int odd(1), eve(2);
		int start_eve;
		int count(0);
		for (int i = 1; i <= N; i++)
		{
			if (i % 2 == 0)
			{
				for (int j = 0; j < N; j++)
				{
					cout << eve << " ";
					eve += 2;
					j++;
					if (j < N)
					{
						cout << odd << " ";
						odd += 2;
					}
				}
			}
			else
			{
				for (int j = 0; j < N; j++)
				{
					cout << odd << " ";
					odd += 2;
					j++;
					if (j < N)
					{
						cout << eve << " ";
						eve += 2;
					}
				}
			}
			cout << endl;
		}
	}
}

