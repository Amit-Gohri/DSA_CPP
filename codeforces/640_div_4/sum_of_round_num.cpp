#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n(0);
        vector<int> digit;
        cin >> n;
        //int p(0);
        int r(0), round_no(0);
        int count(0);
        while (n != 0)
        {
            r = n % 10;
            if (r > 0)
            {
                count++;
            }

            digit.push_back(r);
            n = n / 10;
            // round_no = r * (int)pow(10, p);
            // p++;
            // if(round_no>0)
            //     {
            //         //cout << round_no;
            //         count++;
            //         round_no[i];
            //     }
            // n = n / 10;

        }
        int size = digit.size();
        cout << count << endl;
        for (int i = size - 1; i >= 0; i--)
        {
            if (digit[i] > 0) {
                cout << digit[i] * (int)pow(10, i) << " ";
            }
        }
        cout << "\n";
    }

}