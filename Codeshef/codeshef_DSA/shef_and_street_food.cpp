#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int typ_of_food;
        cin >> typ_of_food;
        int profit(0);
        for (int i = 1; i <= typ_of_food; i++)
        {
            int arr[3];
            cin >> arr[0] >> arr[1] >> arr[2];

            profit = max(profit, ((arr[1] / (arr[0] + 1)) * arr[2]));

        }
        cout << profit << endl;
    }

}